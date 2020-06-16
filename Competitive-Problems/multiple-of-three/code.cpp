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
        ll k, d0, d1, rem;
        cin >> k >> d0 >> d1;
        rem = (d0 + d1 + (d0 + d1) % 10) % 3;
        ll S = (2 * (d0 + d1)) % 10 + (4 * (d0 + d1)) % 10 + (8 * (d0 + d1)) % 10 + (6 * (d0 + d1)) % 10;
        rem = (ll((k - 3) / 4 * S) + rem) % 3;
        ll l = (k - 3) % 4;
        ll v[3] = {(2 * (d0 + d1)) % 10, (4 * (d0 + d1)) % 10, (8 * (d0 + d1)) % 10};
        for (int i = 0; l > 0; l--, i++)
        {
            rem = (rem + v[i]) % 3;
        }
        if (rem == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
