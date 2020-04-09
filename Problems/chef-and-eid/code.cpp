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
        vector<ll> p;
        ll n;
        cin >> n;
        while (n--)
        {
            ll k;
            cin >> k;
            p.push_back(k);
        }
        sort(p.begin(), p.end());
        ll min = N;
        for (ll i = 0; i < p.size() - 1; i++)
        {
            ll f = p[i + 1] - p[i];
            if (f == 0)
            {
                min = f;
                break;
            }
            else
            {
                if (f < min)
                {
                    min = f;
                }
            }
        }
        cout << min << endl;
    }
    return 0;
}
