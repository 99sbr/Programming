def bubble_sort_algorithm(array):
    if len(array) == 0:
        return None
    if len(array) == 1:
        return array

    for i in range(len(array)):
        swapped = False
        for j in range(0, len(array)-i-1):
            if array[j] > array[j+1]:
                array[j], array[j+1] = array[j+1], array[j]
                swapped = True

        if not(swapped):
            break


data = [-2, 45, 0, 11, -9]
bubble_sort_algorithm(data)
print('Sorted Array in Ascending Order:')
print(data)
