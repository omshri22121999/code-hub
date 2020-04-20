# Circle Of Monsters

You are playing another computer game, and now you have to slay 𝑛 monsters. These monsters are standing in a circle, numbered clockwise from 1 to 𝑛. Initially, the 𝑖-th monster has 𝑎𝑖 health.

You may shoot the monsters to kill them. Each shot requires exactly one bullet and decreases the health of the targeted monster by 1 (deals 1 damage to it). Furthermore, when the health of some monster 𝑖 becomes 0 or less than 0, it dies and explodes, dealing 𝑏𝑖 damage to the next monster (monster 𝑖+1, if 𝑖<𝑛, or monster 1, if 𝑖=𝑛). If the next monster is already dead, then nothing happens. If the explosion kills the next monster, it explodes too, damaging the monster after it and possibly triggering another explosion, and so on.

You have to calculate the minimum number of bullets you have to fire to kill all 𝑛 monsters in the circle.

## Input

The first line contains one integer 𝑇 (1≤𝑇≤150000) — the number of test cases.

Then the test cases follow, each test case begins with a line containing one integer 𝑛 (2≤𝑛≤300000) — the number of monsters. Then 𝑛 lines follow, each containing two integers 𝑎𝑖 and 𝑏𝑖 (1≤𝑎𝑖,𝑏𝑖≤1012) — the parameters of the 𝑖-th monster in the circle.

It is guaranteed that the total number of monsters in all test cases does not exceed 300000.

## Output

For each test case, print one integer — the minimum number of bullets you have to fire to kill all of the monsters.

## Example Input

```
1
3
7 15
2 14
5 3
```

## Example Output

```
6
```
