for i in range(5):
    print(i)
    
# output 0 1 2 3 4 
for i in range(10):
    if i == 5:
        break
    print(i)
# output 0 1 2 3 4 
for i in range(5):
    if i==2:
        continue
    print(i)
# 0 1 3 4
# List 
fruits = ["apple", "banana", "cherry"]
for fruit in fruits:
    print(fruit)

for letter in "Python":
    print(letter)
# Dictionary
person = {"name": "Alice", "age": 25}
for key in person:
    print(key, ":", person[key])

for i in range(1, 4):
    for j in range(1, 4):
        print(f"{i} x {j} = {i*j}")
    print("-----")
