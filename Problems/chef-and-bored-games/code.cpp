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
        ll n, ans = 0;
        cin >> n;
        for (ll i = 1; i <= n; i += 2)
        {
            ll s = n - i + 1;
            ans += s * s;
        }
        cout << ans << endl;
    }
    return 0;
}
