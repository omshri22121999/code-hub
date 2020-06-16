#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    ifstream cin("input.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ofstream cout("output.txt");
    ll t;
    cin >> t;
    while (t--)
    {
        string s;
        ll k, x;

        cin >> s;
        cin >> k >> x;

        map<int, int> m;

        for (char i = 'a'; i <= 'z'; i++)
        {
            m[i] = 0;
        }
        ll ans = 0;
        for (auto i : s)
        {
            m[i]++;
            if (m[i] > x)
            {
                if (k > 0)
                {
                    m[i]--;
                    k--;
                    ans--;
                }
                else
                {
                    break;
                }
            }
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}
