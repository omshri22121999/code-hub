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
    vector<ll> budgets;
    ll n;
    while (t--)
    {
        cin >> n;
        budgets.push_back(n);
    }
    sort(budgets.begin(), budgets.end());
    ll max = -1;
    for (ll i = 0; i < budgets.size(); i++)
    {
        ll p = budgets[i] * (budgets.size() - i);
        if (p > max)
            max = p;
    }
    cout << max << endl;
    return 0;
}
