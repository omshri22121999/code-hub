#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    std::cout.rdbuf(cout.rdbuf());

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        vector<ll> profit;
        cin >> n;
        while (n--)
        {
            ll si, pi, vi;
            cin >> si >> pi >> vi;
            profit.push_back((pi / (si + 1)) * vi);
        }
        cout << *max_element(profit.begin(), profit.end()) << '\n';
    }
    return 0;
}
