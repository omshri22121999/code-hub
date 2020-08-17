#include <bits/stdc++.h>
#define forn(i, l, n) for (ll i = l; i < n; ++i)
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

    vector<pair<ll, ll>> exams;
    vector<ll> v;
    vector<ll> w;
    ll n, vs, ws;
    cin >> n >> vs >> ws;
    forn(i, 0, n)
    {
        ll p, q;
        cin >> p >> q;
        exams.push_back(make_pair(p, q));
    }
    forn(i, 0, vs)
    {
        ll p;
        cin >> p;
        v.push_back(p);
    }
    forn(i, 0, ws)
    {
        ll p;
        cin >> p;
        w.push_back(p);
    }
    sort(v.begin(), v.end());
    sort(w.begin(), w.end());
    ll min = LLONG_MAX;
    for (auto i : exams)
    {
        ll p = upper_bound(v.begin(), v.end(), i.first) - v.begin() - 1;
        ll q = lower_bound(w.begin(), w.end(), i.second) - w.begin();

        if (p >= 0 and q < ws)
        {
            ll time = (w[q] - v[p] + 1);
            if (time < min)
            {
                min = time;
            }
        }
    }
    cout << min << endl;
    return 0;
}
