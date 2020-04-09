#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n--;
        ll r = n % 26;
        ll m = n / 26;
        m = (1LL << m);
        if (r < 2)
            cout << m << " " << 0 << " " << 0 << endl;
        else if (r < 10)
            cout << 0 << " " << m << " " << 0 << endl;
        else if (r < 26)
            cout << 0 << " " << 0 << " " << m << endl;
    }
    return 0;
}
