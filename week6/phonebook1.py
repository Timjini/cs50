# people = [
#     {"name":"david","number":"+1-932-323-332"},
#     {"name":"samara","number":"+22-443-43-679"},
#     {"name":"tom","number":"+49-5656-443-297"}
# ]

# name = input("Name: ").lower()

# for person in people:
#     if person["name"] == name:
#         number = person["number"]
#         print(f"Found {number}")
#         break
# else:
#     print("not found")

people = {
    "david":"+1-932-323-332",
    "samara":"+22-443-43-679",
    "tom":"+49-5656-443-297"
}

name = input("Name: ").lower()
if name in people:
    print(f"Number: {people[name]}")
else:
    print("not found")