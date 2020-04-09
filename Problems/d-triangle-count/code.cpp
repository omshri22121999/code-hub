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
    for (int _case = 1; _case <= t; _case++)
    {
        ll l, k;
        cin >> l >> k;
        if (k > l)
            cout << "Case " << _case << ": " << 0 << endl;
        else
        {
            ll n = l - k + 1;
            ll ans = n * (n + 1) / 2;
            cout << "Case " << _case << ": " << ans << endl;
        }
    }
    return 0;
}
