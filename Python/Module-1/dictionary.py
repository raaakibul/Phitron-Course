student = {
    "name": "Rakibul",
    "age": 23,
    "skills": ["Python", "Machine Learning"],
    "is_graduate": True
}

print(student)

# Accessing
print(student["name"])
print(student.get("age"))
print(student.get("grade", "Not Found"))

# updating
student["grade"] = "A"
student["age"] = 24
print(student)

# removing
student.pop("grade")
del student["is_graduate"]
student.clear()
