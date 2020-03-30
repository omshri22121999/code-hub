# Good Prefix

Chef got a string S with length N as his birthday gift. A prefix of this string is good if each character occurs in it at most X times.

Chef can delete at most K characters from this string. He wants to maximize the number of good prefixes in the resulting string. Can you help him?

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single string S.
- The second line contains two space-separated integers K and X.

## Output

For each test case, print a single line containing one integer ― the maximum number of good prefixes.

## Example Input

```
3
abcdefagahai
0 1
abcdefagahai
1 1
abcdefagahai
2 1
```

## Example Output

```
6
7
8
```
