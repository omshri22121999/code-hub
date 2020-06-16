# Fibonacci String

For a string S let the unique set of characters that occur in it one or more times be C. Consider a permutation of the elements of C as (c1,c2,c3...). Let f(c) be the number of times c occurs in S.

If any such permutation of the elements of C satisfies f(ci)=f(ci−1)+f(ci−2) for all i≥3, the string is said to be a dynamic string.

Mr Bancroft is given the task to check if the string is dynamic, but he is busy playing with sandpaper. Would you help him in such a state?

Note that if the number of distinct characters in the string is less than 3, i.e. if |C|<3, then the string is always dynamic.

## Input

- First line will contain T, number of testcases. Then the testcases follow.
- Each testcase contains of a single line of input, a string S.

## Output

For each testcase, output in a single line "Dynamic" if the given string is dynamic, otherwise print "Not". (Note that the judge is case sensitive)

## Example Input

```
3
aaaabccc
aabbcc
ppppmmnnoooopp
```

## Example Output

```
Dynamic
Not
Dynamic
```
