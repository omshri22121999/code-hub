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
        vector<ll> a, b;
        for (int i = 0; i < n; i++)
        {
            ll p = 0;
            cin >> p;
            a.push_back(p);
        }

        for (int i = 0; i < n; i++)
        {
            ll p = 0;
            cin >> p;
            b.push_back(p);
        }

        ll k, np = 0, nn = 0, z = 1;
        for (int i = 0; i < n; i++)
        {
            if (b[i] > a[i])
            {
                if (!np)
                {
                    z = 0;
                    cout << "NO\n";
                    break;
                }
            }
            if (b[i] < a[i])
            {
                if (!nn)
                {
                    z = 0;
                    cout << "NO\n";
                    break;
                }
            }
            if (a[i] == 1)
                np++;
            else if (a[i] == -1)
                nn++;
        }
        if (z)
            cout << "YES\n";
    }
    return 0;
}
