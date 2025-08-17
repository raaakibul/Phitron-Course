def binary_search_sub(arr, target, left, right):
    while left <= right:
        mid = (left + right) // 2
        if arr[mid] == target:
            return mid
        elif arr[mid] < target:
            left = mid + 1
        else:
            right = mid - 1
    return -1

def exponential_search(arr, target):
    if arr[0] == target:
        return 0
    
    n = len(arr)
    i = 1
    while i < n and arr[i] <= target:
        i *= 2
    
    return binary_search_sub(arr, target, i // 2, min(i, n-1))

arr = [10, 20, 30, 40, 50]
target = 30
result = exponential_search(arr, target)
print("Exponential Search:", "Found at index", result if result != -1 else "Not found")
