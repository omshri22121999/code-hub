#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll n, a, b, c, F;
    cin >> t;
    while (t--)
    {

        ll max_time = LONG_MAX;
        cin >> n >> a >> b >> c;

        for (int i = 0; i < n; i++)
        {

            cin >> F;
            ll max_time_temp = abs(b - F) + abs(F - a);
            max_time = min(max_time, max_time_temp);
        }

        cout << max_time + c << endl;
    }
    return 0;
}
