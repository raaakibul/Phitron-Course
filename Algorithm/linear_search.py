arr = list(map(int, input("Enter elements separated by space: ").split()))
target = int(input("search element: "))

def linear_search(arr, key_value):
    for i in range(len(arr)):
        if arr[i] == key_value:
            return i  
    return -1 

index = linear_search(arr, target)

if index != -1:
    print(f"Element found at index {index}")
else:
    print("Element not found")
