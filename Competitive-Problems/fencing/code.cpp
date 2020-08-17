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
        ll n, m, k, li, lj;
        set<pair<ll, ll>> plants;
        cin >> n >> m >> k;
        for (ll i = 0; i < k; i++)
        {
            cin >> li >> lj;
            plants.insert(make_pair(li, lj));
        }
        ll len = 0;
        for (auto h : plants)
        {
            ll i = h.first, j = h.second;
            if (i == 1)
                len++;
            else if (i == n)
                len++;
            if (j == 1)
                len++;
            else if (j == m)
                len++;
            if (i - 1 >= 1 and plants.find(make_pair(i - 1, j)) == plants.end())
                len++;
            if (i + 1 <= n and plants.find(make_pair(i + 1, j)) == plants.end())
                len++;
            if (j - 1 >= 1 and plants.find(make_pair(i, j - 1)) == plants.end())
                len++;
            if (j + 1 <= m and plants.find(make_pair(i, j + 1)) == plants.end())
                len++;
        }

        cout << len << endl;
    }
    return 0;
}
