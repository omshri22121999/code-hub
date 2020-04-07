#include <bits/stdc++.h>
#define N 1e9 + 7

using namespace std;

typedef long long ll;

ll primeFactors(ll n)
{
    ll sum = 0;
    while (n % 2 == 0)
    {
        sum++;
        n = n / 2;
    }

    for (ll i = 3; i <= sqrt(n); i = i + 2)
    {
        while (n % i == 0)
        {
            sum++;
            n = n / i;
        }
    }

    if (n > 2)
    {
        sum++;
    }

    return sum;
}

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
        ll x, k;
        cin >> x >> k;
        ll sum = primeFactors(x);
        if (sum >= k)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
