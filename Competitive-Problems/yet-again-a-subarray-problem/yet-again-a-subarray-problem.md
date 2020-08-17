# Yet Again A Subarray Problem

"It does not matter how slowly you go as long as you do not stop." - Confucius

You are given an array A1,A2,…,AN and an integer K. For each subarray S=[Al,Al+1,…,Ar](1≤l≤r≤N):

- Let's define an array B as S concatenated with itself m times, where m is the smallest integer such that m(r−l+1)≥K.
- Next, let's sort B and define X=BK, i.e. as a K-th smallest element of B. Note that |B|≥K.
- Then, let's define F as the number of occurrences of X in S.
- The subarray S is beautiful if F occurs in S at least once.

  Find the number of beautiful subarrays of A. Two subarrays Al,Al+1,…,Ar and Ap,Ap+1,…,Aq are different if l≠p or r≠q.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains two space-separated integers N and K.
- The second line contains N space-separated integers A1,A2,…,AN.

## Output

For each test case, print a single line containing one integer - the number of beautiful subarrays.

## Example Input

```
1
3 3
1 2 3
```

## Example Output

```
3
```
