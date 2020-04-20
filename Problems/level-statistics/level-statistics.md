# Level Statistics

Polycarp has recently created a new level in this cool new game Berlio Maker 85 and uploaded it online. Now players from all over the world can try his level.

All levels in this game have two stats to them: the number of plays and the number of clears. So when a player attempts the level, the number of plays increases by 1. If he manages to finish the level successfully then the number of clears increases by 1 as well. Note that both of the statistics update at the same time (so if the player finishes the level successfully then the number of plays will increase at the same time as the number of clears).

Polycarp is very excited about his level, so he keeps peeking at the stats to know how hard his level turns out to be.

So he peeked at the stats 𝑛 times and wrote down 𝑛 pairs of integers — (𝑝1,𝑐1),(𝑝2,𝑐2),…,(𝑝𝑛,𝑐𝑛), where 𝑝𝑖 is the number of plays at the 𝑖-th moment of time and 𝑐𝑖 is the number of clears at the same moment of time. The stats are given in chronological order (i.e. the order of given pairs is exactly the same as Polycarp has written down).

Between two consecutive moments of time Polycarp peeked at the stats many players (but possibly zero) could attempt the level.

Finally, Polycarp wonders if he hasn't messed up any records and all the pairs are correct. If there could exist such a sequence of plays (and clears, respectively) that the stats were exactly as Polycarp has written down, then he considers his records correct.

Help him to check the correctness of his records.

For your convenience you have to answer multiple independent test cases.

## Input

- The first line contains a single integer 𝑇 (1≤𝑇≤500) — the number of test cases.

- The first line of each test case contains a single integer 𝑛 (1≤𝑛≤100) — the number of moments of time Polycarp peeked at the stats.

- Each of the next 𝑛 lines contains two integers 𝑝𝑖 and 𝑐𝑖 (0≤𝑝𝑖,𝑐𝑖≤1000) — the number of plays and the number of clears of the level at the 𝑖-th moment of time.

- Note that the stats are given in chronological order.

## Output

For each test case print a single line.

If there could exist such a sequence of plays (and clears, respectively) that the stats were exactly as Polycarp has written down, then print "YES".

Otherwise, print "NO".

You can print each letter in any case (upper or lower).

## Example Input

```
6
3
0 0
1 1
1 2
2
1 0
1000 3
4
10 1
15 2
10 2
15 2
1
765 432
2
4 4
4 3
5
0 0
1 0
1 0
1 0
1 0
```

## Example Output

```
NO
YES
NO
YES
NO
YES
```