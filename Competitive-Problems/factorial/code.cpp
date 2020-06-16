#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;

ll largest_pow(ll n, ll p)
{
    ll x = 0;
    while (n)
    {
        n /= p;
        x += n;
    }
    return x;
}
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
        cin >> n;
        cout << largest_pow(n, 5) << endl;
    }
    return 0;
}
