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

    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, check, x, y, k;
        vector<pair<ll, ll>> op;
        cin >> n >> m;
        k = n;
        while (k--)
        {
            cin >> x >> y;
            op.push_back(make_pair(x, y));
        }
        sort(op.begin(), op.end());
        for (int i = 0; i < m; i++)
        {
            ll p;
            cin >> p;
            if (p >= op[n - 1].second)
            {
                cout << -1 << endl;
            }
            else
            {
                ll beg = 0, end = n - 1;
                while (beg <= end)
                {
                    ll mid = (beg + end) / 2;
                    if (op[mid].first > p)
                    {
                        end = mid - 1;
                    }
                    else if (op[mid].first < p && op[mid].second <= p)
                    {
                        beg = mid + 1;
                    }
                    else if (op[mid].first <= p && op[mid].second > p)
                    {
                        cout << 0 << endl;
                        break;
                    }
                }
                if (beg > end)
                {
                    cout << op[beg].first - p << endl;
                }
            }
        }
    }
    return 0;
}