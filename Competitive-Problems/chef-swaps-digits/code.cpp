#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    ifstream cin("input.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ofstream cout("output.txt");

    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b;
        int ua, la, ub, lb;
        vector<ll> sums;
        cin >> a >> b;
        ua = a / 10;
        la = a % 10;
        ub = b / 10;
        lb = b % 10;

        sums.push_back(a + b);
        sums.push_back(ub * 10 + la + ua * 10 + lb);
        if (ub)
            sums.push_back(ua * 10 + ub + la * 10 + lb);
        if (ua)
            sums.push_back(lb * 10 + la + ub * 10 + ua);
        cout << *max_element(sums.begin(), sums.end()) << endl;
    }
    return 0;
}
