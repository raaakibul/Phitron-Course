def celsius_to_fahrenheit(c):
    f = (c * 9/5) + 32
    return f

temp_c = float(input("Enter temperature in Celsius: "))
temp_f = celsius_to_fahrenheit(temp_c)
print(f"{temp_c}°C = {temp_f}°F")