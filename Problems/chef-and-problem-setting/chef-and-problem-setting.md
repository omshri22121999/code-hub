# Chef And Problem Setting

Chef wants to set problems for a Lunchtime contest. He already has all the problem ideas and tests for them. Now, he only needs someone to test them, so he asked Hasan to do it.

Hasan is now testing the problems, the problem that hasan is currently testing has M tests (numbered 1 through M). He wrote N solutions (numbered 1 through N) for this problem; some of the solutions are intended to pass, while other ones are intended to fail on some tests.

He has submitted all of his solutions to this problem in a testing contest. For each solution, the system returned a (possibly empty) list of tests on which this solution failed as feedback.

There are three possible outcomes:

- If there is a solution which is intended to pass all tests, but fails on some test, the tests are invalid.
- If the tests are not invalid and there is a solution which is intended to fail on some test, but passes all tests, the tests are weak.
- If the tests are not invalid or weak, they are fine.

Help Hasan determine the outcome for this problem!

## Input

- The first line of the input contains a single integer T denoting the number of problems that Hasan wants to test. The description of T problems follows.
- The first line contains two space-separated integers N and M.
- N lines follow. For each i (1≤i≤N), the i-th of these lines contains the string "correct" if the i-th solution is intended to pass or "wrong" if it is intended to fail, followed by a space and a string with length M. For each valid j, the j-th character of this string is '1' if the i-th solution passed the j-th test or '0' if it failed the j-th test.

## Output

For each test case, print a single line containing one of the strings "FINE", "INVALID" or "WEAK".

## Example Input

```
4
4 5
correct 11111
wrong 10101
correct 11111
wrong 01111
4 5
correct 10110
wrong 11111
correct 11111
wrong 01000
4 5
correct 11111
wrong 11111
wrong 10100
wrong 00000
4 5
wrong 10110
correct 01101
correct 11111
wrong 11000
```

## Example Output

```
FINE
INVALID
WEAK
INVALID
```
