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
        ll k, max_speed = LLONG_MAX, max_cars = 0, n;
        cin >> n;
        while (n--)
        {
            cin >> k;
            if (k < max_speed)
            {
                max_speed = k;
                max_cars++;
            }
        }
        cout << max_cars << endl;
    }
    return 0;
}
