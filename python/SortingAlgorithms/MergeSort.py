def merge(L, R, array):
    nL = len(L)
    nR = len(R)
    n = len(array)
    i = j = k = 0
    while i < nL and j < nR:
        if L[i] < R[j]:
            array[k] = L[i]
            i += 1
        else:
            array[k] = R[j]
            j += 1
        k += 1

    while i < nL:
        array[k] = L[i]
        k += 1
        i += 1
    while j < nR:
        array[k] = R[j]
        j += 1
        k += 1
    return array


def merge_sort_algorithm(array):
    if len(array) > 1:
        mid = len(array) // 2
        L = array[:mid]
        R = array[mid:]
        merge_sort_algorithm(L)
        merge_sort_algorithm(R)
        array = merge(L, R, array)
        return array


def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


if __name__ == '__main__':
    arr = [12, 11, 13, 8, 7, 6]
    print("Given array is", end="\n")
    printList(arr)
    merge_sort_algorithm(arr)
    print("Sorted array is: ", end="\n")
    printList(arr)
