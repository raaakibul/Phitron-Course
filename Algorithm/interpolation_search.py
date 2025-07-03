def interpolation_search(arr, target):
    low, high = 0, len(arr) - 1
    
    while low <= high and target >= arr[low] and target <= arr[high]:
        pos = low + ((target - arr[low]) * (high - low) // (arr[high] - arr[low]))
        
        if arr[pos] == target:
            return pos
        elif arr[pos] < target:
            low = pos + 1
        else:
            high = pos - 1
            
    return -1

arr = [10, 20, 30, 40, 50]
target = 20
result = interpolation_search(arr, target)
print("Interpolation Search:", "Found at index", result if result != -1 else "Not found")
