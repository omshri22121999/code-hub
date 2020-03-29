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

    ll t;
    vector<ll> ch{1, 2, 3, 4, 5, 6, 7, 9, 11};
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (find(ch.begin(), ch.end(), n) != ch.end())
            cout << -1 << endl;
        else
        {
            if (n % 2 == 0)
            {
                cout << 4 << ' ' << n - 4 << endl;
            }
            else
            {
                cout << 9 << ' ' << n - 9 << endl;
            }
        }
    }
    return 0;
}
