def solution(S):
    dels = 0
    l = [0] * 26

    for i in S:
        l[int(ord(i) - ord("a"))] += 1

    l.sort(reverse=True)

    for i in range(1, len(l)):
        while l[i] >= l[i - 1] and l[i] > 0:
            l[i] -= 1
            dels += 1

    return dels


print(solution("aaaabbbb"))
