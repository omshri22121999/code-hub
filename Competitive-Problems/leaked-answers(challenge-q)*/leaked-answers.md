# Leaked Answers

The final exam is tomorrow and Chef is one of the students who are going to take the exam.

In the exam, there are K question forms. Each form has N multiple-choice questions (numbered 1 through N). In each question, there are M possible answers (numbered 1 through M) and exactly one of those answers is correct. Chef will receive one of the K forms.

Unfortunately, Chef was busy cooking, so he did not study. Instead, he broke into the university's database and stole the sheets containing the correct answers to the questions for all K forms. Let's number the answer sheets 1 through K. For each valid i and j, let's denote the correct answer to the i-th question in the j-th answer sheet by Ci,j. The problem is that Chef cannot know which answer sheet contains the correct answers for the form he receives during the exam. In addition, he can remember the answers to all questions in all answer sheets, but he cannot answer any questions based on his knowledge of the subjects in them.

Help Chef choose the answers to his N questions in such a way that the worst-case (smallest possible) number of correctly answered questions is maximised.

## Input

- The first line of the input contains a single integer T denoting the number of test cases. The description of T test cases follows.
- The first line of each test case contains three space-separated integers N, M and K.
- N lines follow. For each i (1≤i≤N), the i-th of these lines contains K space-separated integers Ci,1,Ci,2,…,Ci,K.

## Output

For each test case, print a single line containing N space-separated integers ― the answers that Chef should choose for questions 1 through N. Each of these integers should be between 1 and M inclusive.

## Example Input

```
1
4 2 2
1 2
2 1
1 1
2 2
```

## Example Output

```
2 1 1 1

```
