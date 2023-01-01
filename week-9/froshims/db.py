import psycopg2
import os


conn = psycopg2.connect(database=os.environ['db'],
                        host=os.environ['host'],
                        user=os.environ['USER'],
                        password=os.environ['db_pswd'],
                        port=os.environ['port'])
cursor = conn.cursor()
# create_table_query = '''CREATE TABLE mobile
#           (ID INT PRIMARY KEY     NOT NULL,
#           MODEL           TEXT    NOT NULL,
#           PRICE         REAL); '''
drop_table_q = '''DROP TABLE IF EXISTS mobile;'''
cursor.execute(drop_table_q)
conn.commit()

print(cursor)
cursor.close()
conn.close()
