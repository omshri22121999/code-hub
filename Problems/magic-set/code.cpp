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

        ll n, m, x, sub = 0;
        cin >> n >> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (x % m == 0)
                sub++;
        }
        ll ans = pow(2, sub) - 1;
        cout << ans << endl;
    }
    return 0;
}
