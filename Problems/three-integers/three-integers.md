# Three Integers

You are given three integers 𝑎≤𝑏≤𝑐.

In one move, you can add +1 or −1 to any of these integers (i.e. increase or decrease any number by one). You can perform such operation any (possibly, zero) number of times, you can even perform this operation several times with one number. Note that you cannot make non-positive numbers using such operations.

You have to perform the minimum number of such operations in order to obtain three integers 𝐴≤𝐵≤𝐶 such that 𝐵 is divisible by 𝐴 and 𝐶 is divisible by 𝐵.

You have to answer 𝑡 independent test cases.

## Input

The first line of the input contains one integer 𝑡 (1≤𝑡≤100) — the number of test cases.

The next 𝑡 lines describe test cases. Each test case is given on a separate line as three space-separated integers 𝑎,𝑏 and 𝑐 (1≤𝑎≤𝑏≤𝑐≤104).

## Output

For each test case, print the answer. In the first line print 𝑟𝑒𝑠 — the minimum number of operations you have to perform to obtain three integers 𝐴≤𝐵≤𝐶 such that 𝐵 is divisible by 𝐴 and 𝐶 is divisible by 𝐵. On the second line print any suitable triple 𝐴,𝐵 and 𝐶.

## Example Input

```
8
1 2 3
123 321 456
5 10 15
15 18 21
100 100 101
1 22 29
3 19 38
6 30 46
```

## Example Output

```
1
1 1 3
102
114 228 456
4
4 8 16
6
18 18 18
1
100 100 100
7
1 22 22
2
1 19 38
8
6 24 48
```
