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
        string s;
        cin >> s;
        ll k = 0;
        ll ans = 0;
        for (ll i = 0; i < s.length(); i++)
        {
            if (s[i] == '<')
                k++;
            else
                k--;
            if (k == 0)
            {
                ans = max(ans, i + 1);
            }
            else if (k < 0)
            {
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
