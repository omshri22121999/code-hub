# Yet Another Partition Problem

Given an array A with N positive integers - (A1,A2,…,AN).

A partition of the array into subarrays refers to dividing the entire array into subarrays (ie. some continuous elements) such that each of the N elements is in exactly one subarray.

We call a partition of the array into subarrays as Valid, if this condition holds true: For all i, if i and i+1 are in the same subarray then Ai+1 must be divisible by Ai.

Now, among all such Valid partitions, we are interested in the partition with the minimum number of subarrays. It can be proved that there is a unique such partition. We will be interested only with this partition in the problem.

We call Si the index of the subarray in which element i lies.

We now want to support some operations on the array. In particular, there are Q operations of the form -

- 1 i X - Change Ai to X
- 2 i - Given i , output the smallest j such that Si=Sj. That is, the leftmost index which belongs to the same subarray as the i-th element.

## Input

- First line will contain N and Q denoting the size of A and number of operations respectively.
- The second line contains N values, the initial values of A.
- The next Q lines contain the operations as stated above.

## Output

The answer for each query of type 2 on a new line.

## Example Input

```
5 5
2 2 7 14 14
1 1 3
1 2 6
2 2
2 4
2 5
```

## Example Output

```
1
3
3
```
