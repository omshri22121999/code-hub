# Construct The String

You are given three positive integers 𝑛, 𝑎 and 𝑏. You have to construct a string 𝑠 of length 𝑛 consisting of lowercase Latin letters such that each substring of length 𝑎 has exactly 𝑏 distinct letters.

You have to answer 𝑡 independent test cases.

Recall that the substring 𝑠[𝑙…𝑟] is the string 𝑠𝑙,𝑠𝑙+1,…,𝑠𝑟 and its length is 𝑟−𝑙+1. In this problem you are only interestd in substrings of length 𝑎.

## Input

- The first line of the input contains one integer 𝑡 (1≤𝑡≤2000) — the number of test cases. Then 𝑡 test cases follow.

- The only line of a test case contains three space-separated integers 𝑛, 𝑎 and 𝑏 (1≤𝑎≤𝑛≤2000,1≤𝑏≤min(26,𝑎)), where 𝑛 is the length of the required string, 𝑎 is the length of a substring and 𝑏 is the required number of distinct letters in each substring of length 𝑎.

- It is guaranteed that the sum of 𝑛 over all test cases does not exceed 2000 (∑𝑛≤2000).

## Output

For each test case, print the answer — such a string 𝑠 of length 𝑛 consisting of lowercase Latin letters that each substring of length 𝑎 has exactly 𝑏 distinct letters. If there are multiple valid answers, print any of them.

## Example Input

```
4
7 5 3
6 1 1
6 6 1
5 2 2
```

## Example Output

```
tleelte
qwerty
vvvvvv
abcde
```
