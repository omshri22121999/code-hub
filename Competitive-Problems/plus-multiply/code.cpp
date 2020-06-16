#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;
ll ncr(ll n, ll r)
{
    ll p = 1, k = 1;

    if (n - r < r)
        r = n - r;

    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;

            ll m = __gcd(p, k);

            p /= m;
            k /= m;

            n--;
            r--;
        }
    }

    else
        p = 1;

    return p;
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
        ll n0 = 0, n2 = 0;
        ll n;
        cin >> n;
        ll k;
        while (n--)
        {
            cin >> k;
            if (k == 2)
                n2++;
            if (k == 0)
                n0++;
        }
        ll sum = 0;
        if (n2 > 1)
        {
            sum += ncr(n2, 2);
        }
        if (n0 > 1)
        {
            sum += ncr(n0, 2);
        }
        cout << sum << endl;
    }
    return 0;
}
