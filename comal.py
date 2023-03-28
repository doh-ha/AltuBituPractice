def nsquare_sort(arr):
    if len(arr) <= 1:
        return arr
    pivot = arr[len(arr)//2]
    left_arr, equal_arr, right_arr = [], [], []
    for num in arr:
        if num < pivot:
            left_arr.append(num)
        elif num > pivot:
            right_arr.append(num)
        else:
            equal_arr.append(num)
    return nsquare_sort(left_arr) +equal_arr + nsquare_sort(right_arr)

input_array = [11, 4, 63, 12, 45, 24, 67, 23, 78, 72, 14]
final = nsquare_sort(input_array)
print(final)
