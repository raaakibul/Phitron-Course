n = int(input("Enter number :"))

sum = 0
even_number_sum =0
odd_number_sum =0
for i in range(1,n+1):
    sum +=i
    if i%2==0:
        even_number_sum +=i
    else:
        odd_number_sum +=i
print("Sum : ",sum)
print("Even number of sum :", even_number_sum)
print("Odd number of sum : ",odd_number_sum)
