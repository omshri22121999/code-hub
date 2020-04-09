# That Is My Score

You are participating in a contest which has 11 problems (numbered 1 through 11). The first eight problems (i.e. problems 1,2,…,8) are scorable, while the last three problems (9, 10 and 11) are non-scorable ― this means that any submissions you make on any of these problems do not affect your total score.

Your total score is the sum of your best scores for all scorable problems. That is, for each scorable problem, you look at the scores of all submissions you made on that problem and take the maximum of these scores (or 0 if you didn't make any submissions on that problem); the total score is the sum of the maximum scores you took.

You know the results of all submissions you made. Calculate your total score.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N denoting the number of submissions you made.
- N lines follow. For each i (1≤i≤N), the i-th of these lines contains two space-separated integers pi and si, denoting that your i-th submission was on problem pi and it received a score si.

## Output

For each test case, print a single line containing one integer ― your total score.

## Example Input

```
2
5
2 45
9 100
8 0
2 15
8 90
1
11 1
```

## Example Output

```
135
0
```
