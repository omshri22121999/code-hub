#include <bits/stdc++.h>

using namespace std;

void print_matrix(vector<vector<int>> a)
{
    cout << endl;
    for (auto i : a)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void print_spiral(vector<vector<int>> a, int i, int j, int n, int m)
{
    int p = i, q = j;
    if (i > n || j > m)
    {
        return;
    }
    while (q < m - 1)
    {
        cout << a[p][q] << ' ';
        q++;
    }
    while (p < n - 1)
    {
        cout << a[p][q] << ' ';
        p++;
    }
    while (q > i)
    {
        cout << a[p][q] << ' ';
        q--;
    }
    while (p > j)
    {
        cout << a[p][q] << ' ';
        p--;
    }
    print_spiral(a, i + 1, j + 1, n - 1, m - 1);
}

int main(void)
{

    ifstream cin("input.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    ofstream cout("output.txt");
    std::cout.rdbuf(cout.rdbuf());

    int t;
    cin >> t;
    while (t--)
    {
        int N, M;

        vector<vector<int>> a;
        cin >> N >> M;

        for (int i = 0; i < N; i++)
        {
            vector<int> z;
            for (int j = 0; j < M; j++)
            {
                int k;
                cin >> k;
                z.push_back(k);
            }
            a.push_back(z);
        }

        print_spiral(a, 0, 0, N, M);

        cout << endl;
    }
    return 0;
}