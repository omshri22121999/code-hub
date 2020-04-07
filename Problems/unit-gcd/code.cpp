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
        list<ll> z;
        ll n;

        cin >> n;
        if (n == 1)
        {
            cout << 1 << endl;
            cout << 1 << ' ' << 1 << endl;
        }
        else if (n == 2)
        {
            cout << 1 << endl;
            cout << 2 << ' ' << 1 << ' ' << 2 << endl;
        }
        else if (n == 3)
        {
            cout << 1 << endl;
            cout << 3 << ' ' << 1 << ' ' << 2 << ' ' << 3 << endl;
        }
        else
        {
            cout << n / 2 << endl;
            cout << 3 << ' ' << 1 << ' ' << 2 << ' ' << 3 << endl;
            for (int i = 4; i <= n; i += 2)
            {
                if (i + 1 > n)
                {
                    cout << 1 << ' ' << i << endl;
                }
                else
                {
                    cout << 2 << ' ' << i << ' ' << i + 1 << endl;
                }
            }
        }
    }
    return 0;
}
