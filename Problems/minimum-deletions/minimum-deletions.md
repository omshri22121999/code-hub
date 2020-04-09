# Minimum Deletions

The greatest common divisor (GCD) of a sequence is the greatest positive integer which divides each element of this sequence.

You are given a sequence A of positive integers with size N. You are allowed to delete up to N−1 elements from this sequence. (I.e., you may delete any number of elements, including zero, as long as the resulting sequence is non-empty.)

Please find the minimum number of elements which have to be deleted so that the GCD of the resulting sequence would be equal to 1, or determine that it is impossible.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- The second line contains N space-separated integers A1,A2,…,AN.

## Output

For each test case, print a single line containing one integer — the minimum number of elements to delete, or −1 if it is impossible to make the GCD equal to 1.

## Example Input

```
2
2
2 3
2
2 4
```

## Example Output

```
0
-1
```
