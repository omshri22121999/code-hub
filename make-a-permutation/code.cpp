#include <bits/stdc++.h>
#define ll unsigned long long
#define ui unsigned int
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    std::cout.rdbuf(cout.rdbuf());

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, ans = 0;
        vector<ll> a;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] <= n)
            {
                for (ll j = 0; j < i; j++)
                {
                    if (a[j] == a[i])
                    {
                        ans++;
                        break;
                    }
                }
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
