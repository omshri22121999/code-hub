import numpy as np
import sys


N = int(sys.argv[1])
M = int(sys.argv[2])

a = np.random.randint(1, 10, (N, M))

for i in a:
    for j in i:
        print(j, end=" ")

    print()
