
arr = [14, 9, 1, 12, 1, 8, 1]

n = len(arr)

for i in range(n):
    j = i
    while (j > 0 and (arr[j-1] > arr[j])):
        temp = arr[j]
        arr[j] = arr[j-1]
        arr[j-1] = temp
        j = j-1
print(arr)