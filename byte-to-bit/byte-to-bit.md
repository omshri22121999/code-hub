## Select Training Set

In the magical land of Byteland, there are three kinds of citizens:

a Bit - 2ms after a Bit appears, it grows up and becomes a Nibble (i.e. it disappears and a Nibble appears)
a Nibble - 8ms after a Nibble appears, it grows up and becomes a Byte
a Byte - 16ms after a Byte appears, it grows up, splits into two Bits and disappears
Chef wants to know the answer to the following question: what would the population of Byteland be immediately before the time Nms if only 1 Bit appeared at time 0ms?

Help him and find the population (number of citizens) of each type.

### Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains a single integer N.

### Output

For each test case, print a single line containing three space-separated integers — the number of Bits, Nibbles and Bytes.

### Constraints

- 1≤T≤104
- 1≤N≤1,600

### Example Input

```
2
2
3
```

### Example Output

```
1 0 0
0 1 0
```
