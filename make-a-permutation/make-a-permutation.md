## Make A Permutation

You are given an integer sequence A with length N. In one move, you are allowed to choose one element of this sequence and change it to an arbitrary integer. Compute the minimum number of moves needed to make the sequence a permutation of the integers 1 through N.

### Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- The second line contains N space-separated integers A1,A2,…,AN.

### Output

For each test case, print a single line containing one integer — the minimum required number of moves.

### Constraints

- 1≤T≤100
- 1≤N≤105
- The sum of N for all test cases does not exceed 2⋅105
- 1≤Ai≤109 for each valid i

### Example Input

```
2
4
1 2 3 3
3
2 6 2
```

### Example Output

```
1
2
```
