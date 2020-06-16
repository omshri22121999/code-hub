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
        ll n, k, x;
        vector<ll> a;
        cin >> n >> k;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] > k)
            {
                cout << 0;
            }
            else
            {
                k -= a[i];
                cout << 1;
            }
        }
        cout << endl;
    }
    return 0;
}
