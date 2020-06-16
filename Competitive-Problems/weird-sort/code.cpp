#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print_vector(vector<ll> a)
{
    for (auto l : a)
    {
        cout << l << ' ';
    }
    cout << endl;
}
int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll m, n;
        vector<ll> a, p;
        cin >> n >> m;
        while (n--)
        {
            ll z;
            cin >> z;
            a.push_back(z);
        }
        while (m--)
        {
            ll z;
            cin >> z;
            p.push_back(z);
        }
        // print_vector(a);
        // print_vector(p);
        for (ll i = 0; i < a.size() - 1; i++)
        {
            for (ll j = 0; j < a.size() - 1; j++)
            {
                // cout << "a[j]" << a[j] << endl;
                // cout << "a[j+1]" << a[j + 1] << endl;
                if (a[j] > a[j + 1])
                {
                    // cout << "j:" << j + 1 << endl;
                    if (find(p.begin(), p.end(), j + 1) != p.end())
                    {
                        swap(a[j], a[j + 1]);
                    }
                }
            }
        }
        // print_vector(a);
        vector<ll> ans = a;
        sort(ans.begin(), ans.end());
        if (ans == a)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
