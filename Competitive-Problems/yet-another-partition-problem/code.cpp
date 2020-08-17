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

    ll n, q;
    cin >> n >> q;
    vector<ll> a;
    set<ll> first_elem;
    first_elem.insert(0);
    ll pre_k = 1;
    for (ll i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        a.push_back(k);
        if (k % pre_k != 0)
        {
            first_elem.insert(i);
        }
        pre_k = k;
    }
    for (int j = 0; j < q; j++)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll i, x;
            cin >> i >> x;
            i--;
            a[i] = x;
            if (i == 0)
            {
                if (a[i + 1] % a[i] == 0)
                {
                    first_elem.erase(i + 1);
                }
                else
                {
                    first_elem.insert(i + 1);
                }
            }
            else if (i == n - 1)
            {
                if (a[i] % a[i - 1] == 0)
                {
                    first_elem.erase(i);
                }
                else
                {
                    first_elem.insert(i);
                }
            }
            else
            {
                if (a[i] % a[i - 1] == 0 and a[i + 1] % a[i] == 0)
                {
                    first_elem.erase(i);
                    first_elem.erase(i + 1);
                }

                else if (a[i] % a[i - 1] == 0 and a[i + 1] % a[i] != 0)
                {
                    first_elem.erase(i);
                    first_elem.insert(i + 1);
                }

                else if (a[i] % a[i - 1] != 0 and a[i + 1] % a[i] == 0)
                {
                    first_elem.insert(i);
                    first_elem.erase(i + 1);
                }
                else
                {
                    first_elem.insert(i);
                    first_elem.insert(i + 1);
                }
            }
        }
        else
        {
            ll i;
            cin >> i;
            auto it = first_elem.upper_bound(i - 1);
            it--;
            cout << (*it + 1) << endl;
        }
    }

    return 0;
}
