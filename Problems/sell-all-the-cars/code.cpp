#include <bits/stdc++.h>
#define N 1000000007

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
        vector<ll> a;
        ll n;
        cin >> n;
        while (n--)
        {
            ll k;
            cin >> k;
            a.push_back(k);
        }
        sort(a.begin(), a.end(), greater<ll>());
        ll sum = 0;
        for (int i = 0; i < a.size(); i++)
        {
            ll k = a[i] - i;
            if (k < 0)
                k = 0;
            sum = (sum + k) % N;
        }
        cout << sum << endl;
    }
    return 0;
}
