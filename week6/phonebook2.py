import csv

name = input("Name :")
number = input("Number: ")

with open("file.csv", "a") as file:
    writer = csv.DictWriter(file, fieldnames=["name", "number"])
    writer.writerow({"name": name,"number":number})
