# Eugene And An Array

Eugene likes working with arrays. And today he needs your help in solving one challenging task.

An array 𝑐 is a subarray of an array 𝑏 if 𝑐 can be obtained from 𝑏 by deletion of several (possibly, zero or all) elements from the beginning and several (possibly, zero or all) elements from the end.

Let's call a nonempty array good if for every nonempty subarray of this array, sum of the elements of this subarray is nonzero. For example, array [−1,2,−3] is good, as all arrays [−1], [−1,2], [−1,2,−3], [2], [2,−3], [−3] have nonzero sums of elements. However, array [−1,2,−1,−3] isn't good, as his subarray [−1,2,−1] has sum of elements equal to 0.

Help Eugene to calculate the number of nonempty good subarrays of a given array 𝑎.

## Input

- The first line of the input contains a single integer 𝑛 (1≤𝑛≤2×105) — the length of array 𝑎.

- The second line of the input contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (−109≤𝑎𝑖≤109) — the elements of 𝑎.

## Output

Output a single integer — the number of good subarrays of 𝑎.

## Example Input

```
3
1 2 -3
```

```
3
41 -41 41
```

## Example Output

```
5
```

```
3
```
