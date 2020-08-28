# you can write to stdout for debugging purposes, e.g.
# print("this is a debug message")


def solution(A):

    sums = {}

    ans = 0

    cur = 0
    for i in A:
        cur = cur + i

        if cur == 0:
            ans += 1
        if cur in sums:
            ans += sums[cur]
            sums[cur] += 1
        else:
            sums[cur] = 1
        
    if ans > 1000000000:
        return -1
    else:
        return ans


print(solution([2, -2, 3, 0, 4, -7]))

