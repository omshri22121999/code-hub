#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
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
        ll n, a, k, x, y;
        cin >> n >> a >> k;
        y = n * (n - 1);
        x = a * y + (k - 1) * (360 * (n - 2) - (2 * a * n));
        ll z = gcd(x, y);
        cout << x / z << ' ' << y / z << endl;
    }
    return 0;
}
