# Infix To Postfix

You are given an infix expression S of length N. You need to convert the given expression S to its postfix equivalent using stack.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N denoting the length of S.
- The second line contains a string S, the infix expression.

## Output

For each test case print a single line containing the postfix equivalent for the given infix expression.

## Example Input

```
2
15
((A+B)*D)^(E-F)
19
A+(B*C-(D/E^F)*G)*H
```

## Example Output

```
AB+D*EF-^
ABC*DEF^/G*-H*+
```
