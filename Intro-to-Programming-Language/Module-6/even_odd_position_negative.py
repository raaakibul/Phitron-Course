n = int(input())
numbers = list(map(int,input().split()))

even, odd, positive, negative =0
for num in numbers:
    if num%2==0:
        even+=1
    else:
        odd+=1
    if num>0:
        positive+=1
    elif num<0:
        negative+=1
print("Even",even)
print("Odd",odd)
print("Positive",positive)
print("Negative",negative)