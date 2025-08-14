person = {
    "name": "Alice",
    "age": 25,
    "city": "Paris"
}

# Keys
for key in person:
    print(key)

# Values
for value in person.values():
    print(value)

# Key-Value pairs
for key, value in person.items():
    print(f"{key} → {value}")

# nested dictionary
students = {
    "s1": {"name": "Alice", "age": 20},
    "s2": {"name": "Bob", "age": 22}
}

print(students["s1"]["name"])
