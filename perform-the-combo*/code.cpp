#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll glob = 0;
bool isLess(ll i)
{
    return i > glob;
}
int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    std::cout.rdbuf(cout.rdbuf());

    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> ans(26, 0), p;
        map<char, vector<ll>> pos;
        string s;
        ll n, m;
        cin >> n >> m;
        cin >> s;
        while (m--)
        {
            ll z;
            cin >> z;
            p.push_back(z);
        }
        p.push_back(s.size());
        sort(p.begin(), p.end());
        for (ll i = 0; i < s.size(); i++)
        {
            auto z = lower_bound(p.begin(), p.end(), i);
            cout << s[i] << ' : ' << z - p.begin() << endl;

            ans[s[i] - 'a'] += z - p.begin();
        }
        for (auto i : ans)
        {
            cout << i << ' ';
        }
        cout << "\n";
    }
    return 0;
}
