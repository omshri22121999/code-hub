## Perform The Combo

You want to perform the combo on your opponent in one popular fighting game. The combo is the string 𝑠 consisting of 𝑛 lowercase Latin letters. To perform the combo, you have to press all buttons in the order they appear in 𝑠. I.e. if 𝑠="abca" then you have to press 'a', then 'b', 'c' and 'a' again.

You know that you will spend 𝑚 wrong tries to perform the combo and during the 𝑖-th try you will make a mistake right after 𝑝𝑖-th button (1≤𝑝𝑖<𝑛) (i.e. you will press first 𝑝𝑖 buttons right and start performing the combo from the beginning). It is guaranteed that during the 𝑚+1-th try you press all buttons right and finally perform the combo.

I.e. if 𝑠="abca", 𝑚=2 and 𝑝=[1,3] then the sequence of pressed buttons will be 'a' (here you're making a mistake and start performing the combo from the beginning), 'a', 'b', 'c', (here you're making a mistake and start performing the combo from the beginning), 'a' (note that at this point you will not perform the combo because of the mistake), 'b', 'c', 'a'.

Your task is to calculate for each button (letter) the number of times you'll press it.

You have to answer 𝑡 independent test cases.

## Input

The first line of the input contains one integer 𝑡 (1≤𝑡≤104) — the number of test cases.

Then 𝑡 test cases follow.

The first line of each test case contains two integers 𝑛 and 𝑚 (2≤𝑛≤2⋅105, 1≤𝑚≤2⋅105) — the length of 𝑠 and the number of tries correspondingly.

The second line of each test case contains the string 𝑠 consisting of 𝑛 lowercase Latin letters.

The third line of each test case contains 𝑚 integers 𝑝1,𝑝2,…,𝑝𝑚 (1≤𝑝𝑖<𝑛) — the number of characters pressed right during the 𝑖-th try.

It is guaranteed that the sum of 𝑛 and the sum of 𝑚 both does not exceed 2⋅105 (∑𝑛≤2⋅105, ∑𝑚≤2⋅105).

## Output

For each test case, print the answer — 26 integers: the number of times you press the button 'a', the number of times you press the button 'b', …, the number of times you press the button 'z'.

### Example Input

```
3
4 2
abca
1 3
10 5
codeforces
2 8 3 2 9
26 10
qwertyuioplkjhgfdsazxcvbnm
20 10 1 2 3 5 10 5 9 4
```

### Example Output

```
4 2 2 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0
0 0 9 4 5 3 0 0 0 0 0 0 0 0 9 0 0 3 1 0 0 0 0 0 0 0
2 1 1 2 9 2 2 2 5 2 2 2 1 1 5 4 11 8 2 7 5 1 10 1 5 2
```
