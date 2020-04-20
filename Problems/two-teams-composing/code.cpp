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
        vector<ll> l(n + 1, 0);
        ll u = 0;
        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            if (l[k] == 0)
                u++;
            l[k]++;
        }
        u--;
        ll nu = *max_element(l.begin(), l.end());
        if (nu > u + 1)
        {
            cout << u + 1;
        }
        else if (nu > u)
        {
            cout << u;
        }
        else
        {
            cout << nu;
        }
        cout << endl;
    }
    return 0;
}
