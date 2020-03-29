## Shrink It

You are given a binary string s of length N, a string that contains only 0s and 1s. Let us define a contraction operation as the following: Select some i, 1≤i<s.size such that s[i]=s[i+1], remove both of them and replace them with just s[i]. Note that this operation reduces the size of the string by 1. For example, let s=100101001. Choose i=2 and contract it; we get a new string, s=10101001.

After doing all possible contractions, will the string obtained be palindromic?

A palindromic string is defined as a string which is equal to it's reverse. It can be proven that the string formed after all contractions is unique.

### Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case has an integer N, denoting the length of the string.
- The second line has a binary string of length N.
- It is guaranteed that the input is valid.

### Output

For each test case, print a single line containing one string ― the answer, “YES” or “NO”. Note that the judge is case sensitive.

### Example Input

```
2
2
01
6
000000
```

### Example Output

```
NO
YES
```
