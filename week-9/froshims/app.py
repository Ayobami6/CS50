from flask import Flask, render_template, request, redirect
import psycopg2
import os
from flask_mail import Mail, Message

app = Flask(__name__)

# Configuring Flask mail
app.config["MAIL_DEFAULT_SENDER"] = os.environ["MAIL_SENDER"]
app.config['MAIL_SERVER'] = 'smtp.mailtrap.io'
app.config['MAIL_PORT'] = 2525
app.config['MAIL_USERNAME'] = '664bab4b1ad734'
app.config['MAIL_PASSWORD'] = '9994573db797ef'
app.config['MAIL_USE_TLS'] = True
app.config['MAIL_USE_SSL'] = False

mail = Mail(app)


# Creating a database connection
conn = psycopg2.connect(database=os.environ['db'],
                        host=os.environ['host'],
                        user=os.environ['USER'],
                        password=os.environ['db_pswd'],
                        port=os.environ['port'])
cursor = conn.cursor()


Sports = ["Basketball", "Soccer", "Football"]


@app.route("/")
def home():
    return render_template("index.html", sports=Sports)


@app.route("/register", methods=["POST"])
def register():
    # Validating names and options
    name = request.form.get("name")
    sport = request.form.get("sport")
    email = request.form.get("email")
    if not name or not sport:
        return render_template("failure.html")
    if request.form.get("sport") not in Sports:
        return render_template("failure.html")

    # Registrants[name] = sport

    # Register query
    reg_query = '''INSERT INTO register (name, sport, email) VALUES (%s, %s,
     %s)'''
    values = (name, sport, email)
    cursor.execute(reg_query, values)

    msg = Message("Congrats! Registration Completed",
                  recipients=[email])
    mail.send(msg)
    conn.commit()
    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    cursor.execute("SELECT * FROM register")
    Registrants = cursor.fetchall()
    return render_template("registrants.html", registrants=Registrants)
