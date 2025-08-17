arr = list(map(int, input("Enter sorted elements separated by space: ").split()))
target = int(input("search element: "))


def binary_search(arr, key_value):
    low = 0
    high = len(arr) - 1

    while low <= high:
        mid = (low + high)

        if arr[mid] == key_value:
            return mid  
        elif arr[mid] < key_value:
            low = mid + 1  
        else:
            high = mid - 1

    return -1

index = binary_search(arr, target)

if index != -1:
    print(f"Element found at index {index}")
else:
    print("Element not found")
