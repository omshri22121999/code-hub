def solution(A, B, N):

    arr = {}

    for i, j in zip(A, B):
        if i in arr:
            arr[i].append(j)
        else:
            arr[i] = [j]

        if j in arr:
            arr[j].append(i)
        else:
            arr[j] = [i]

    visited = set()
    max_val = -float("inf")
    for i in arr:
        for j in arr[i]:
            if j not in visited:
                rds = len(arr[i]) + len(arr[j]) - 1
                if rds > max_val:
                    max_val = rds
        visited.add(i)

    return max_val


print(solution([1, 2, 3, 3], [2, 3, 1, 4], 4))

