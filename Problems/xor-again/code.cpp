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
        ll k;
        cin >> n;
        ll ans = 0;
        while (n--)
        {
            cin >> k;
            ans = ans ^ k;
        }
        cout << 2 * ans << endl;
    }
    return 0;
}
