# Middle Class

Many years ago Berland was a small country where only 𝑛 people lived. Each person had some savings: the 𝑖-th one had 𝑎𝑖 burles.

The government considered a person as wealthy if he had at least 𝑥 burles. To increase the number of wealthy people Berland decided to carry out several reforms. Each reform looked like that:

the government chooses some subset of people (maybe all of them);
the government takes all savings from the chosen people and redistributes the savings among the chosen people equally.
For example, consider the savings as list [5,1,2,1]: if the government chose the 1-st and the 3-rd persons then it, at first, will take all 5+2=7 burles and after that will return 3.5 burles to the chosen people. As a result, the savings will become [3.5,1,3.5,1].

A lot of data was lost from that time, so we don't know how many reforms were implemented and to whom. All we can do is ask you to calculate the maximum possible number of wealthy people after several (maybe zero) reforms.

## Input

- The first line contains single integer 𝑇 (1≤𝑇≤1000) — the number of test cases.

- Next 2𝑇 lines contain the test cases — two lines per test case. The first line contains two integers 𝑛 and 𝑥 (1≤𝑛≤105, 1≤𝑥≤109) — the number of people and the minimum amount of money to be considered as wealthy.

- The second line contains 𝑛 integers 𝑎1,𝑎2,…,𝑎𝑛 (1≤𝑎𝑖≤109) — the initial savings of each person.

- It's guaranteed that the total sum of 𝑛 doesn't exceed 105.

## Output

Print 𝑇 integers — one per test case. For each test case print the maximum possible number of wealthy people after several (maybe zero) reforms.

## Example Input

```
4
4 3
5 1 2 1
4 10
11 9 11 9
2 5
4 3
3 7
9 4 9
```

## Example Output

```
2
4
0
3
```
