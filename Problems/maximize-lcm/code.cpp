#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const ll N = 1e5 + 7;

vector<vector<pair<int, int>>> sieve(int n)
{
    // ofstream f("sieve.txt");
    vector<vector<pair<int, int>>> div(n);

    for (int i = 2; i < n; i++)
    {
        if (!div[i].size())
        {
            for (int j = i; j < n; j += i)
            {
                div[j].push_back(make_pair(i, 0));
            }
        }
    }

    for (int i = 2; i < n; i++)
    {
        int cur = i;
        for (auto &j : div[i])
        {
            int cnt = 0;
            while (!(cur % j.first))
            {
                cur /= j.first;
                cnt++;
            }
            j.second = cnt;
        }
    }

    // for (int i = 2; i < n; i++)
    // {
    //     f << "Factorization of " << i << endl;
    //     for (int j = 0; j < div[i].size(); j++)
    //     {
    //         f << endl
    //           << div[i][j].first << " ^ " << div[i][j].second << endl;
    //     }
    // }
    return div;
}

int main(void)
{
    ifstream cin("input.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ofstream cout("output.txt");

    auto div = sieve(N);
    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        cin >> n >> m;

        vector<int> a(n, 0);
        vector<int> maxPrime(N, 0);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            for (auto d : div[a[i]])
            {
                maxPrime[d.first] = max(maxPrime[d.first], d.second);
            }
        }
        int maxLCM = 0, ans = 0;
        for (int i = 1; i <= m; i++)
        {
            ll val = 1;
            for (auto j : div[i])
            {
                ll rem_gcd = max(0, j.second - maxPrime[j.first]);

                for (int k = 1; k <= rem_gcd; k++)
                {
                    val *= j.first;
                }
            }
            if (val > maxLCM)
            {
                maxLCM = val;
                ans = i;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
