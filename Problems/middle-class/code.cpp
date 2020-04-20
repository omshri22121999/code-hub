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
        ll n, x;
        ll p;
        vector<ll> a;
        cin >> n >> x;
        ll k = n;
        while (n--)
        {
            cin >> p;
            a.push_back(p);
        }
        sort(a.begin(), a.end(), greater<ll>());
        ll sum = 0;
        ll ans = 0;
        for (ll i = 0; i < k; i++)
        {
            sum = sum + a[i];
            if (sum >= x * (i + 1))
            {
                ans = i + 1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
