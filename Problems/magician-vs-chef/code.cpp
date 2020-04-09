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
        ll n, x, s, a, b;
        cin >> n >> x >> s;
        for (int i = 0; i < s; i++)
        {
            cin >> a >> b;
            if (a == x)
                x = b;
            else if (b == x)
                x = a;
        }
        cout << x << endl;
    }
    return 0;
}
