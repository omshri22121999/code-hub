#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define N 1e9 + 7
#define endl '\n'
using namespace std;
using namespace __gnu_pbds;

typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag,
             tree_order_statistics_node_update>
    ordered_set;
ordered_set s;
int M[2002];
int a[2002];
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
        ll n, k, p;
        cin >> n >> k;
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll tot = 0;
        for (ll i = 0; i < n; i++)
        {
            s.clear();
            memset(M, 0, sizeof(M));
            for (int j = i; j < n; j++)
            {
                s.insert({a[j], M[a[j]]++});
                int len = j - i + 1;
                int m = (k + len - 1) / len;
                int K = (k - 1) / m + 1;
                auto it = s.find_by_order(K - 1);
                int X = it->first;
                int F = M[X];
                if (M[F])
                    tot++;
            }
        }
        cout << tot << endl;
    }
    return 0;
}
