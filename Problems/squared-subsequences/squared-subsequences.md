# Squared Subsequences

Let's call a sequence of integers good if the product of its elements can be represented as a difference of squares of two integers. More formally, a sequence S1,S2,…,SK is good if it is possible to find two integers p and q such that S1⋅S2⋅…⋅SK=p2−q2.

Chef has a sequence A1,A2,…,AN. He wants to find the number of contiguous subsequences of A which are good. Can you help him?

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- The second line contains N space-separated integers A1,A2,…,AN.

## Output

For each test case, print a single line containing one integer ― the number of good contiguous subsequences of A.

## Example Input

```
2
3
1 2 3
3
2 5 6
```

## Example Output

```
2
2
```
