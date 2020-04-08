# Ready Bitwise

Yukti found a strange paper with a Boolean expression written on it. Unfortunately, all the operands were missing from this expression. Being an innovative person, Yukti immediately created a riddle for her students based on this incomplete expression.

The students are given a string L describing a valid Boolean expression, where each operand (value) is replaced by the character '#'. A valid expression is defined as one of the following:

A single term '#'.
A string in the format "([expression1][operator][expression2])", where [expression1] and [expression2] are valid expressions and [operator] is one of the characters '&', '|' and '^' (denoting bitwise AND, OR and XOR respectively).
Each of the characters '#' in the string L should be replaced by one of the characters '0', '1', 'a' and 'A', uniformly randomly and independently. Then, the resulting expression is evaluated as follows:

- A Boolean value a (0 or 1) is chosen. Each occurrence of the character 'a' is interpreted as this value and each occurrence of 'A' is interpreted as its negation (1−a). The characters '0' and '1' are interpreted as the Boolean values 0 and 1 respectively.
  Since there are two possible values of a, we obtain two constant Boolean expressions this way. Let's denote them by G0 (when a = 0) and G1 (when a = 1).
- Let's evaluate G0 and G1.
  - If G0=G1=0, the value of the expression is '0'.
  - If G0=G1=1, the value of the expression is '1'.
  - If G0=0 and G1=1, the value of the expression is 'a'.
  - If G0=1 and G1=0, the value of the expression is 'A'.

Can you find the probabilities with which the expression obtained after substituting for each character '#' evaluates to these values? It can be proved that for each of these values, the probability can be expressed as a fraction P/Q, where P and Q are integers (P≥0, Q>0) and Q is coprime with 998,244,353. You should compute P⋅Q^−1 modulo 998,244,353 for each of these values.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first and only line of each test case contains a single string L.

## Output

For each testFor each test case, print a single line containing four space-separated integers ― the answers corresponding to the probabilities that the value of the Boolean expression is '0', '1', 'a' or 'A' respectively. case, print a single line containing one integer — the minimum required number of moves.

## Example Input

```
2
#
(#&#)
```

## Example Output

```
748683265 748683265 748683265 748683265
436731905 935854081 811073537 811073537
```
