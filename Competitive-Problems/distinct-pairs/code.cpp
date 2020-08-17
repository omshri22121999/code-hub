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

    ll n, m;
    cin >> n >> m;
    vector<pair<ll, ll>> a, b;
    ll z;
    for (int i = 0; i < n; i++)
    {
        cin >> z;
        a.push_back(make_pair(z, i));
    }
    for (int i = 0; i < m; i++)
    {
        cin >> z;
        b.push_back(make_pair(z, i));
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int j = 0; j < m; j++)
    {
        cout << a[0].second << ' ' << b[j].second << endl;
    }
    for (int i = 1; i < n; i++)
    {
        cout << a[i].second << ' ' << b[m - 1].second << endl;
    }

    return 0;
}
