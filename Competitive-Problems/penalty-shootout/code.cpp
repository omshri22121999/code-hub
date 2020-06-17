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
        ll a_lim = n + 1, b_lim = n + 1;
        ll a_g = 0, b_g = 0;
        ll i = 0;
        string s;
        cin >> s;

        for (; i < 2 * n and a_g < a_lim and b_g < b_lim; ++i)
        {
            if (i & 1)
            {
                if (s[i] == '0')
                {
                    --a_lim;
                }
                else if (s[i] == '1')
                {
                    ++b_g;
                }
            }
            else
            {
                if (s[i] == '0')
                {
                    --b_lim;
                }
                else if (s[i] == '1')
                {
                    ++a_g;
                }
            }
        }
        cout << i << endl;
    }
    return 0;
}
