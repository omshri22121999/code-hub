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
        ll g, i, n, q;
        cin >> g;
        while (g--)
        {
            cin >> i >> n >> q;
            if (n % 2 == 0)
            {
                cout << n / 2 << endl;
            }
            else
            {
                if (i == q)
                {
                    cout << (n - 1) / 2 << endl;
                }
                else
                {
                    cout << (n + 1) / 2 << endl;
                }
            }
        }
    }
    return 0;
}
