#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'
#define F 998244353

using namespace std;
typedef long long ll;

ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        ll q = a / m;
        ll t = m;

        m = a % m, a = t;
        t = y;

        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;

    return x;
}

struct node
{
    ll ans;
    node *first_child;
    node *next_sibling;
};
class tree
{
    node *root;
    
};

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
        string exp;
        cin >> exp;
        if (k.size() == 1)
        {
            cout << "748683265 748683265 748683265 748683265\n";
        }
        else
        {
            ll br = 0;
            stack<char> k;

            for (auto i : exp)
            {
                if (i == '(')
            }
        }
    }
    return 0;
}
