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
        ll n;
        cin >> n;
        ll k = n;
        vector<ll> as, bs;
        ll a, b;
        ll ans = 0;
        ll mn = 1e18;
        while (k--)
        {
            cin >> a >> b;
            as.push_back(a);
            bs.push_back(b);
        }
        for (int i = 0; i < n; i++)
        {
            a = as[(i + 1) % n];
            b = bs[i];
            ll val = min(a, b);
            ans += a - val;
            mn = min(mn, val);
        }
        ans += mn;
        cout << ans << endl;
    }
    return 0;
}
