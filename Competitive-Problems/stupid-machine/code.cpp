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
        vector<ll> s;
        ll n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            ll k;
            cin >> k;
            s.push_back(k);
        }
        ll sum = 0, max_len = n, value_now = 0;
        while (max_len > 1)
        {
            ll min_val = *min_element(s.begin(), s.begin() + max_len);
            sum += (min_val - value_now) * max_len;
            value_now += (min_val - value_now);
            max_len = min_element(s.begin(), s.begin() + max_len) - s.begin();
        }
        if (s[0] > value_now)
        {
            sum += s[0] - value_now;
        }
        cout << sum << endl;
    }
    return 0;
}
