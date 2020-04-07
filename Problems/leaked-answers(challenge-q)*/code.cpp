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
    std::cin.rdbuf(cin.rdbuf());
    ofstream cout("output.txt");
    std::cout.rdbuf(cout.rdbuf());

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<vector<ll>> z;
        while (n--)
        {
            vector<ll> p(m, 0);
            for (int i = 0; i < k; i++)
            {
                ll o;
                cin >> o;
                p[o - 1]++;
            }
            z.push_back(p);
        }
        for (auto j : z)
        {
            cout << max_element(j.begin(), j.end()) - j.begin() + 1 << ' ';
        }
        cout << endl;
    }
    return 0;
}
