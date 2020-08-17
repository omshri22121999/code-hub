A = int(input())

li = []
li_now = []

for i in range(0, A + 1):
    for j in range(0, i + 1):
        if j == 0 or j == i:
            li_now.append(1)
        else:
            li_now.append(li[i - 1][j - 1] + li[i - 1][j])
    li.append(li_now)

    li_now = []

print(li[-1])
