# Chef Of The Year

Chefs from all over the globe gather each year for an international convention. Each chef represents some country. Please, note that more than one chef can represent a country.

Each of them presents their best dish to the audience. The audience then sends emails to a secret and secure mail server, with the subject being the name of the chef whom they wish to elect as the "Chef of the Year".

You will be given the list of the subjects of all the emails. Find the country whose chefs got the most number of votes, and also the chef who got elected as the "Chef of the Year" (the chef who got the most number of votes).

Note 1

If several countries got the maximal number of votes, consider the country with the lexicographically smaller name among them to be a winner. Similarly if several chefs got the maximal number of votes, consider the chef with the lexicographically smaller name among them to be a winner.

Note 2

The string A = a1a2...an is called lexicographically smaller then the string B = b1b2...bm in the following two cases:

there exists index i ≤ min{n, m} such that aj = bj for 1 ≤ j < i and ai < bi;
A is a proper prefix of B, that is, n < m and aj = bj for 1 ≤ j ≤ n.
The characters in strings are compared by their ASCII codes.

Refer to function strcmp in C or to standard comparator < for string data structure in C++ for details.

## Input

The first line of the input contains two space-separated integers N and M denoting the number of chefs and the number of emails respectively. Each of the following N lines contains two space-separated strings, denoting the name of the chef and his country respectively. Each of the following M lines contains one string denoting the subject of the email.

## Output

Output should consist of two lines. The first line should contain the name of the country whose chefs got the most number of votes. The second line should contain the name of the chef who is elected as the "Chef of the Year".

## Example Input 1

```
1 3
Leibniz Germany
Leibniz
Leibniz
Leibniz
```

## Example Output 1

```
Germany
Leibniz
```

## Example Input 2

```
4 5
Ramanujan India
Torricelli Italy
Gauss Germany
Lagrange Italy
Ramanujan
Torricelli
Torricelli
Ramanujan
Lagrange
```

## Example Output 2

```
Italy
Ramanujan
```

## Example Input 3

```
2 2
Newton England
Euclid Greece
Newton
Euclid
```

## Example Output 3

```
England
Euclid
```
