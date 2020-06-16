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
        ll n, s, tot = 0, j;
        cin >> n;
        while (n--)
        {
            cin >> s >> j;
            if (j - s > 5)
                tot++;
        }
        cout << tot << endl;
    }
    return 0;
}
