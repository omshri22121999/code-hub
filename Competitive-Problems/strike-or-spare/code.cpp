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
        ll n;
        char a[100000] = {'1'};
        cin >> n;
        if (n == 1)
            cout << "1 1\n";
        else
        {
            ll l = n / 2;
            for (ll i = 1; i <= l; i++)
            {
                a[i] = '0';
            }
            cout << "1 "
                 << a << endl;
        }
    }
    return 0;
}
