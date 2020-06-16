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
        int a[100][100] = {0};
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> a[i][j];
            }
        }
        ll max = 0;
        for (int i = 0; i < n; i++)
        {
            ll x = i, y = 0, sum = 0;
            while (x < n)
            {
                sum += a[x][y];
                x++;
                y++;
            }
            if (sum > max)
                max = sum;
        }
        for (int i = 1; i < n; i++)
        {
            ll x = 0, y = i, sum = 0;
            while (y < n)
            {
                sum += a[x][y];
                x++;
                y++;
            }
            if (sum > max)
                max = sum;
        }
        cout << max << endl;
    }
    return 0;
}
