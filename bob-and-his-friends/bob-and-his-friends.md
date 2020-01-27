## Select Training Set

Alice just invited Bob to come over for dinner at her place. Bob is not dressed properly and he does not wish to take any chances, so he wants to rush to an apartment of one of his N friends, change there and meet Alice for the dinner.

Alice and Bob's friends live in a skyscraper with many floors. Alice lives on the a-th floor, the apartments of Bob's friends are located on the floors F1,F2,…,FN and Bob is initially at the b-th floor. It takes exactly 1 minute to go one floor up or down from each floor.

Bob needs exactly c minutes to change in any of his friends' apartments. Find the minimum time he needs to go to one of his friends' apartments, change and get to Alice's apartment.

### Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains four space-separated integers N, a, b and c.
- The second line contains N space-separated integers F1,F2,…,FN.

### Output

Print a single line containing one integer ― the minimum time Bob needs.

### Constraints

- 1≤T≤10
- 1≤N≤105
- 1≤a,b,c≤109
- 1≤Fi≤109 for each valid i

### Example Input

```
2
3 1 5 2
6 7 8
1 1 2 1000000000
1000000000
```

### Example Output

```
8
2999999997
```
