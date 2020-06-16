# Lengthen It

A sequence of numbers is called a good sequence if it forms an increasing consecutive sequence of integers. For eg, [5], [−3,−2,−1] and [9,10,11] are good sequences whereas [2,4], [3,2,1] and [5,7,6] don’t form good sequences.

A subsequence of an array is the sequence obtained by removing some, possibly all number of the elements from the array. For array A=[2,3,4,5,6], [2,5,6] , [4] and [2,3,4] are valid subsequences whereas [3,2,5] is not a valid subsequence.

Given an array A of size n, a good subsequence of the array is a subsequence that forms a good sequence. For example, if A=[2,3,5,6,4], a1, a2 and a5 form a good subsequence which ends in a5.

For every element of a given array, find out the length of the longest good subsequence that ends in that element.

## Input

- The first line contains the number of test cases T.
- Each test case has two lines. The first line contains a single number n, the size of the array.
- The second line contains n integers where the ith number represents ai.

## Output

For each test case, in a new line print n numbers, where the ith number is the length of the longest good subsequence that ends in ai.

## Example Input

```
1
5
-3 -2 5 -1 6
```

## Example Output

```
1 2 1 3 2
```
