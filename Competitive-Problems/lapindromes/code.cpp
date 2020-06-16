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
        string s;
        cin >> s;
        vector<pair<int, int>> nests(26, make_pair(0, 0));
        bool flag = true;
        ll k = (s.length() + 1) / 2;
        ll h = (s.length()) / 2;
        for (ll i = 0, j = k; i < h; i++, j++)
        {
            nests[s[i] - 'a'].first += 1;
            nests[s[j] - 'a'].second += 1;
        }
        for (auto i : nests)
        {
            if (i.first != i.second)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
