#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef long long ll;

ll N = 1e9 + 7;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    ll n, k;
    stack<pair<ll, ll>> bins = stack<pair<ll, ll>>({make_pair(-1, 1)});
    ll ans = 1;
    cin >> n >> k;
    ll z;

    for (ll i = 1; i <= n; i++)
    {
        cin >> z;
        while (bins.top().first > z)
        {
            ans = (ans * ((i - bins.top().second) + 1)) % N;
            bins.pop();
        }

        bins.push(make_pair(z, i));
    }
    cout << ans << endl;
    return 0;
}
