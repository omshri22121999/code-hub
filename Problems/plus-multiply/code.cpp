#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    int n;
    ll k;
    while (t--)
    {
        ll a2 = 0, a0 = 0;
        cin >> n;
        while (n--)
        {
            cin >> k;
            if (k == 2)
                a2++;
            if (k == 0)
                a0++;
        }
        ll sum = 0;
        sum = ((a2 > 0) ? a2 * (a2 - 1) / 2 : 0) + ((a0 > 0) ? a0 * (a0 - 1) / 2 : 0);

        cout << sum << '\n';
    }
    return 0;
}
