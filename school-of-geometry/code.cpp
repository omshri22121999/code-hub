#include <bits/stdc++.h>
#define ll long long
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
        ll n, m;
        vector<ll> a, b;
        ll sum = 0;
        cin >> n;

        for (ll i = 0; i < n; i++)
        {
            cin >> m;
            a.push_back(m);
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> m;
            b.push_back(m);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for (ll i = 0; i < n; i++)
        {
            if (a[i] >= b[i])
            {
                sum += b[i];
            }
            else
            {
                sum += a[i];
            }
        }

        cout << sum << '\n';
    }
    return 0;
}
