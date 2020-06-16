# Kind Anton

Once again, Boris needs the help of Anton in creating a task. This time Anton needs to solve the following problem:

There are two arrays of integers 𝑎 and 𝑏 of length 𝑛. It turned out that array 𝑎 contains only elements from the set {−1,0,1}.

Anton can perform the following sequence of operations any number of times:

Choose any pair of indexes (𝑖,𝑗) such that 1≤𝑖<𝑗≤𝑛. It is possible to choose the same pair (𝑖,𝑗) more than once.
Add 𝑎𝑖 to 𝑎𝑗. In other words, 𝑗-th element of the array becomes equal to 𝑎𝑖+𝑎𝑗.
For example, if you are given array [1,−1,0], you can transform it only to [1,−1,−1], [1,0,0] and [1,−1,1] by one operation.

Anton wants to predict if it is possible to apply some number (zero or more) of these operations to the array 𝑎 so that it becomes equal to array 𝑏. Can you help him?

## Input

Each test contains multiple test cases.

The first line contains the number of test cases 𝑡 (1≤𝑡≤10000). The description of the test cases follows.

The first line of each test case contains a single integer 𝑛 (1≤𝑛≤105) — the length of arrays.

The second line of each test case contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (−1≤𝑎𝑖≤1) — elements of array 𝑎. There can be duplicates among elements.

The third line of each test case contains 𝑛 integers 𝑏1,𝑏2,…,𝑏𝑛 (−109≤𝑏𝑖≤109) — elements of array 𝑏. There can be duplicates among elements.

It is guaranteed that the sum of 𝑛 over all test cases doesn't exceed 105.

## Output

For each test case, output one line containing "YES" if it's possible to make arrays 𝑎 and 𝑏 equal by performing the described operations, or "NO" if it's impossible.

You can print each letter in any case (upper or lower).

## Example Input

```
5
3
1 -1 0
1 1 -2
3
0 1 1
0 2 2
2
1 0
1 41
2
-1 0
-1 -41
5
0 1 -1 1 -1
1 1 -1 1 -1
```

## Example Output

```
YES
NO
YES
YES
NO
```
