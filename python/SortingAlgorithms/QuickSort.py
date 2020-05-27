def partition(A, start, end):
    pivot = A[end]
    pIndex = start
    for i in range(start, end):
        if A[i] < pivot:
            A[i], A[pIndex] = A[pIndex], A[i]
            pIndex += 1

    A[end], A[pIndex] = A[pIndex], A[end]
    return pIndex


def quick_sort_algorithm(A, start, end):
    if start < end:
        pIndex = partition(A, start, end)
        quick_sort_algorithm(A, start, pIndex - 1)
        quick_sort_algorithm(A, pIndex + 1, end)


def printList(arr):
    for i in range(len(arr)):
        print(arr[i], end=" ")
    print()


if __name__ == '__main__':
    A = [12, 11, 13, 8, 7, 6]
    print("Given array is", end="\n")
    printList(A)
    quick_sort_algorithm(A, 0, len(A) - 1)
    print("Sorted array is: ", end="\n")
    printList(A)
