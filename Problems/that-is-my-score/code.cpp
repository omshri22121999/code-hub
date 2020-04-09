#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> ans(11, 0);

        ll n;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            ll q, a;
            cin >> q >> a;
            if (ans[q - 1] < a)
            {
                ans[q - 1] = a;
            }
        }
        ll sum = 0;
        for (int i = 0; i < 8; i++)
        {
            sum += ans[i];
        }
        cout << sum << endl;
    }
    return 0;
}
