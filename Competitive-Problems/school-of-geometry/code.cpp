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
        ll n, m;
        vector<ll> a, b;
        ll sum = 0;
        cin >> n;

        for (ll i = 0; i < n; i++)
        {
            cin >> m;
            a.push_back(m);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> m;
            b.push_back(m);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= b[i])
            {
                sum += b[i];
            }
            else
            {
                sum += a[i];
            }
        }

        cout << sum << '\n';
    }
    return 0;
}
