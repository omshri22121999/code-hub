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
        ll n;
        vector<ll> a;

        cin >> n;
        vector<ll> ans(n, 0);
        while (n--)
        {
            ll z;
            cin >> z;
            a.push_back(z);
        }

        for (ll i = 0; i < a.size(); i++)
        {
            ans[i] = 1;
            for (ll j = i - 1; j >= 0; j--)
            {
                if (a[j] == a[i] - 1)
                {
                    ans[i] += ans[j];
                    break;
                }
            }
        }
        for (auto k : ans)
        {
            cout << k << ' ';
        }
        cout << endl;
    }
    return 0;
}
