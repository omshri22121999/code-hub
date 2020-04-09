#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<vector<char>> a(n, vector<char>(m, 'B'));
        a[0][0] = 'W';
        for (auto i : a)
        {
            for (auto j : i)
            {
                cout << j;
            }
            cout << endl;
        }
    }
    return 0;
}
