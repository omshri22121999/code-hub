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
        ll p1, p2, k;
        cin >> p1 >> p2 >> k;
        ll sum = p1 + p2;
        if ((sum / k) & 1)
            cout << "COOK\n";
        else
            cout << "CHEF\n";
    }
    return 0;
}
