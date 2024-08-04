arr = [13, 46, 24, 52, 20, 9, 46,  24]

n = len(arr)

for i in range(n-1, 0, -1):
    didSwap = 0
    for j in range(i):
        if arr[j] > arr[j+1]:
            temp = arr[j]
            arr[j] = arr[j+1]
            arr[j+1] = temp
            didSwap  = 1
    if didSwap ==0:
        break
print(arr)