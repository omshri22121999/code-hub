#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<long long> vl;
typedef list<long long> lil;

template <typename t>
void print_vec(vector<t> &a)
{
    cout << "\nVector:\n";
    for (auto i : a)
    {
        cout << i << endl;
    }
}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(vl a, ll b)
{
    ll ans = 1;
    for (auto i : a)
    {
        ans = (ans * i) / gcd(ans, i);
    }

    return ans * b / gcd(ans, b);
}

int main(void)
{
    ifstream cin("input.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    ofstream cout("output.txt");
    std::cout.rdbuf(cout.rdbuf());

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        vl a;
        cin >> n >> m;
        while (n--)
        {
            ll z;
            cin >> z;
            a.push_back(z);
        }
        vl lcm_max;
        for (ll i = 1; i <= m; i++)
        {
            lcm_max.push_back(lcm(a, i));
        }

        cout << find(lcm_max.begin(), lcm_max.end(), *max_element(lcm_max.begin(), lcm_max.end())) - lcm_max.begin() + 1 << endl;
    }
    return 0;
}
