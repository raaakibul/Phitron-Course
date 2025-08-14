sentence = "Python programming is fun."
print(sentence.find("programming"))  # 7
print(sentence.find("Java"))  # -1 (not found)
print(sentence.startswith("Python"))  # True
print(sentence.endswith("fun."))  # True

# replacing text
text = "I like Java."
new_text = text.replace("Java", "Python")
print(new_text)

# spiliting and joining
text = "apple,banana,cherry"
fruits = text.split(",")
print(fruits)

joined_text = " - ".join(fruits)
print(joined_text)