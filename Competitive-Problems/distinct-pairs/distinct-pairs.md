# Distinct Pairs

Chef has two integer sequences A1,A2,…,AN and B1,B2,…,BM. You should choose N+M−1 pairs, each in the form (Ax,By), such that the sums Ax+By are all pairwise distinct.

It is guaranteed that under the given constraints, a solution always exists. If there are multiple solutions, you may find any one.

## Input

- The first line of the input contains two space-separated integers N and M.
- The second line contains N space-separated integers A1,A2,…,AN.
- The third line contains M space-separated integers B1,B2,…,BM.

## Output

Print N+M−1 lines. Each of these lines should contain two space-separated integers x and y denoting that you chose a pair (Ax+1,By+1).

## Example Input

```
3 2
10 1 100
4 3
```

## Example Output

```
2 1
0 0
1 0
0 1
```
