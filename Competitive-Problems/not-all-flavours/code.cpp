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
        ll n, k;
        cin >> n >> k;
        vector<ll> f;
        for (int i = 0; i < n; ++i)
        {
            ll p;
            cin >> p;
            f.push_back(--p);
        }
        if (k > n)
        {
            cout << n << endl;
        }
        else
        {
            vector<ll> c(k, 0);
            ll c2 = 0, ans = 0;
            for (ll l = 0, r = 0; l < n; ++l)
            {
                while (r < n and (c[f[r]] > 0 or c2 < k - 1))
                {
                    if (c[f[r]] == 0)
                        ++c2;
                    ++c[f[r]];
                    ++r;
                }
                ans = max(ans, r - l);
                --c[f[l]];
                if (c[f[l]] == 0)
                {
                    --c2;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
