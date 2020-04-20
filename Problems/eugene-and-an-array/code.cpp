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

    ll n;
    cin >> n;
    vector<ll> pr_sum(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        ll k;
        cin >> k;
        pr_sum[i + 1] = pr_sum[i] + k;
    }
    ll begin = 0, end = 0, ans = 0;
    set<ll> p = {0};
    while (begin < n)
    {
        while (end < n and !p.count(pr_sum[end + 1]))
        {
            ++end;
            p.insert(pr_sum[end]);
        }
        ans += end - begin;
        ++begin;
        p.erase(pr_sum[begin - 1]);
    }
    cout << ans << endl;
    return 0;
}
