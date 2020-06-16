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

        ll n, k, x;
        vector<ll> a;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            a.push_back(x);
        }
        ll max = 0;
        for (int j = 0; j < n - k + 1; j++)
        {
            ll sum = 0;
            for (int m = j; m < j + k; m++)
            {
                sum += a[m];
            }
            if (sum > max)
                max = sum;
        }
        cout << max << endl;
    }
    return 0;
}
