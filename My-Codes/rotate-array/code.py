A = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
]


def print_arr(A):
    for i in A:
        print(" ".join([str(j) for j in i]))


print_arr(A)

N = len(A)

p = (0, 0)
q = (0, N - 1)
r = (N - 1, N - 1)
s = (N - 1, 0)


while p[0] < N / 2:
    a = p
    b = q
    c = r
    d = s

    while a[1] < q[1]:
        temp = A[a[0]][a[1]]
        A[a[0]][a[1]] = A[d[0]][d[1]]
        A[d[0]][d[1]] = A[c[0]][c[1]]
        A[c[0]][c[1]] = A[b[0]][b[1]]
        A[b[0]][b[1]] = temp
        a = (a[0], a[1] + 1)
        b = (b[0] + 1, b[1])
        c = (c[0], c[1] - 1)
        d = (d[0] - 1, d[1])

    p = (p[0] + 1, p[1] + 1)
    q = (q[0] + 1, q[1] - 1)
    r = (r[0] - 1, r[1] - 1)
    s = (s[0] - 1, s[1] + 1)

print_arr(A)
