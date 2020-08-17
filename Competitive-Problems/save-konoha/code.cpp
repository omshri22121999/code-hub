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
        ll n, z;
        cin >> n >> z;
        priority_queue<ll> h;
        for (ll i = 0; i < n; i++)
        {
            ll q;
            cin >> q;
            h.push(q);
        }
        ll ans = 0;
        while (h.top() != 0 and z > 0)
        {
            // cout << z << ' ' << h[0] << endl;
            ll k = h.top();
            z = z - k;
            k = k / 2;
            h.pop();
            h.push(k);
            ans++;
        }
        if (z > 0)
        {
            cout << "Evacuate\n";
        }
        else
        {
            cout << ans << endl;
        }
    }
    return 0;
}
