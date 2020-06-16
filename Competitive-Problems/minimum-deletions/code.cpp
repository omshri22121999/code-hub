#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    if (a == b)
        return a;

    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

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
        ll n, p = 0;
        ll gcd_now = 1;
        cin >> n;
        cin >> gcd_now;

        for (int i = 1; i < n; i++)
        {
            ll k;
            cin >> k;
            gcd_now = gcd(gcd_now, k);
        }
        if (gcd_now == 1)
            cout << 0 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}
