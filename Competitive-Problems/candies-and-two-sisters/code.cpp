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
        ll n;
        cin >> n;
        if (n & 1)
        {
            cout << n / 2 << endl;
        }
        else
        {
            cout << n / 2 - 1 << endl;
        }
    }
    return 0;
}
