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
        bool flag = true;
        ll last_p = 0, last_c = 0, p = 0, c = 0;
        vector<ll> p_vec, c_vec;
        cin >> n;
        ll k = n;
        while (n--)
        {
            cin >> p >> c;
            p_vec.push_back(p);
            c_vec.push_back(c);
        }
        for (int i = 0; i < k; i++)
        {
            p = p_vec[i];
            c = c_vec[i];
            if (c > p || (last_p > p) || (last_c > c) || (p - last_p < c - last_c))
            {
                flag = false;
                cout << "NO\n";
                break;
            }
            last_c = c;
            last_p = p;
        }
        if (flag)
            cout << "YES\n";
    }
    return 0;
}
