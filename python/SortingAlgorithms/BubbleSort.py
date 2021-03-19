def bubble_sort_algorithm(array):
    if len(array) > 1:
        for i in range(len(array)):
            for j in range(0, len(array) - i-1):
                if array[j] > array[j + 1]:
                    array[j + 1], array[j] = array[j], array[j + 1]
                else:
                    pass
    return array


array = [1, -2, 9, 4, 3, 10, 7]
print(bubble_sort_algorithm(array))
