def merge_sort_algorithm(array):
    if len(array) > 1:
        n = len(array)
        L = array[:n//2]
        R = array[n//2:]

        merge_sort_algorithm(L)
        merge_sort_algorithm(R)

        i = j = k = 0

        while(i < len(L) and j < len(R)):
            if L[i] < R[j]:
                array[k] = L[i]
                i += 1
            else:
                array[k] = R[j]
                j += 1
            k += 1

        while(i < len(L)):
            array[k] = L[i]
            i += 1
            k += 1

        while(j < len(R)):
            array[k] = R[j]
            j += 1
            k += 1


def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


if __name__ == '__main__':
    arr = [12, 11, 13, 5, 6, 7]
    print("Given array is", end="\n")
    printList(arr)
    merge_sort_algorithm(arr)
    print("Sorted array is: ", end="\n")
    printList(arr)
