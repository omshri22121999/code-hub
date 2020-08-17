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

    ll t, x, y;
    vector<ll> mini(100002, 500), left(100002, 0), right(100002, 100000);
    cin >> t;
    while (t--)
    {
        cin >> x >> y;
        if (mini[x] > y)
            mini[x] = y;
    }
    stack<ll> lefts, rights;
    for (int i = 0; i < 100002; i++)
    {
        while (!(lefts.empty() or mini[lefts.top()] < mini[i]))
            lefts.pop();

        if (!lefts.empty())
            left[i] = lefts.top();
        lefts.push(i);
    }
    for (int i = 100001; i >= 0; i--)
    {
        while (!(rights.empty() or mini[rights.top()] < mini[i]))
            rights.pop();

        if (!rights.empty())
            right[i] = rights.top();
        rights.push(i);
    }
    ll ans = -1;
    for (int i = 0; i < 100001; i++)
    {
        ll area = (right[i] - left[i]) * mini[i];
        if (area > ans)
            ans = area;
    }
    cout << ans << endl;
    return 0;
}
