# The Theatre Problem

Chef's friend Alex runs a movie theatre. Due to the increasing number of platforms for watching movies online, his business is not running well. As a friend, Alex asked Chef to help him maximise his profits. Since Chef is a busy person, he needs your help to support his friend Alex.

Alex's theatre has four showtimes: 12 PM, 3 PM, 6 PM and 9 PM. He has four movies which he would like to play ― let's call them A, B, C and D. Each of these movies must be played exactly once and all four must be played at different showtimes. For each showtime, the price of a ticket must be one of the following: Rs 25, Rs 50, Rs 75 or Rs 100. The prices of tickets for different showtimes must also be different.

Through his app, Alex receives various requests from his customers. Each request has the form "I want to watch this movie at this showtime". Let's assume that the number of people who come to watch a movie at a given showtime is the same as the number of requests for that movie at that showtime.

It is not necessary to accommodate everyone's requests ― Alex just wants to earn the maximum amount of money. There is no restriction on the capacity of the theatre. However, for each movie that is not watched by anyone, Alex would suffer a loss of Rs 100 (deducted from the profit).

You are given N requests Alex received during one day. Find the maximum amount of money he can earn on that day by choosing when to play which movies and with which prices.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains a single integer N.
- N lines follow. Each of these lines contains a character m, followed by a space and an integer t, describing a request to see the movie m at the showtime t.

## Output

For each test case, print a single line containing one integer ― the maximum profit Alex can earn (possibly negative).

Finally, print a line containing one integer ― the total profit over all test cases, i.e. over T days.

## Example Input

```
5
12
A 3
B 12
C 6
A 9
B 12
C 12
D 3
B 9
D 3
B 12
B 9
C 6
7
A 9
A 9
B 6
C 3
D 12
A 9
B 6
2
A 9
B 6
1
D 12
0
```

## Example Output

```
75
525
-25
-200
-400
475
```
