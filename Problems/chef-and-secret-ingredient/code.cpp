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
        ll n, x, a;
        cin >> n >> x;
        bool yes = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a >= x)
                yes = 1;
        }
        if (yes)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
