A = [
    int(i) for i in input("Enter the array (seperated by space) : ").strip().split(" ")
]


def merge_sort(A):
    n = len(A)
    if n == 1:
        return A

    left = merge_sort(A[0 : n // 2])
    right = merge_sort(A[n // 2 :])

    sort_arr = []
    i = 0
    j = 0
    while i < len(left) and j < len(right):
        if left[i] < right[j]:
            sort_arr.append(left[i])
            i += 1
        elif right[j] < left[i]:
            sort_arr.append(right[j])
            j += 1
        else:
            sort_arr.append(left[i])
            i += 1
            sort_arr.append(right[j])
            j += 1
    while i < len(left):
        sort_arr.append(left[i])
        i += 1
    while j < len(right):
        sort_arr.append(right[j])
        j += 1

    return sort_arr


print("Sorted array : ", merge_sort(A))

