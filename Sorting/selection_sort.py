
### Selection sort
arr = [1,6,8,4,4,7,6]

for i in range(len(arr)):
    min = i
    for j in range(i, len(arr)):
        if arr[min] > arr[j]:

            ### Performing swapping
            temp = arr[min]
            arr[min] = arr[j]
            arr[j] = temp
    
print(arr)