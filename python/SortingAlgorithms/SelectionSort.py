def selection_sort_algorithm(array):
    if len(array) == 0:
        return None
    if len(array) == 1:
        return array
    for i in range(len(array)):
        iMin = i
        for j in range(i+1, len(array)):
            if array[j] < array[iMin]:
                iMin = j

        array[iMin], array[i] = array[i], array[iMin]


data = [-2, 45, 0, 11, -9]
selection_sort_algorithm(data)
print('Sorted Array in Ascending Order:')
print(data)
