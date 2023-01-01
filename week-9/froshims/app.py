from flask import Flask, render_template, request, redirect

app = Flask(__name__)

# Creating a database

Sports = ["Basketball", "Soccer", "Football"]
Registrants = {}


@app.route("/")
def home():
    return render_template("index.html", sports=Sports)


@app.route("/register", methods=["POST"])
def register():
    # Validating names and options
    name = request.form.get("name")
    sport = request.form.get("sport")
    if not name or not sport:
        return render_template("failure.html")
    if request.form.get("sport") not in Sports:
        return render_template("failure.html")

    Registrants[name] = sport
    return redirect("/registrants")


@app.route("/registrants")
def registrants():
    return render_template("registrants.html", registrants=Registrants)
