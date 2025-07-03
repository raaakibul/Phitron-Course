import math

def jump_search(arr, target):
    n = len(arr)
    step = int(math.sqrt(n))
    prev = 0
    
    while arr[min(step, n)-1] < target:
        prev = step
        step += int(math.sqrt(n))
        if prev >= n:
            return -1
    
    for i in range(prev, min(step, n)):
        if arr[i] == target:
            return i
    
    return -1

arr = [10, 20, 30, 40, 50]
target = 50
result = jump_search(arr, target)
print("Jump Search:", "Found at index", result if result != -1 else "Not found")
