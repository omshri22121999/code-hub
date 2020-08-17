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

    while (true)
    {
        vector<ll> heights;
        ll n;
        cin >> n;
        if (n == 0)
            break;
        for (ll i = 0; i < n; i++)
        {
            ll z;
            cin >> z;
            heights.push_back(z);
        }
        stack<ll> v;
        ll ans = -1;
        ll i = 0;
        for (ll i = 0; i < n; i++)
        {
            if (v.empty() or heights[i] >= heights[v.top()])
                v.push(i);
            else
            {
                while (!v.empty() and heights[i] < heights[v.top()])
                {
                    ll tp = v.top();
                    v.pop();
                    ll area = (heights[tp]) * ((v.empty()) ? i : i - v.top() - 1);
                    if (area > ans)
                        ans = area;
                }
                v.push(i);
            }
        }
        while (!v.empty())
        {
            ll tp = v.top();
            v.pop();
            ll area = (heights[tp]) * ((v.empty()) ? n : n - v.top() - 1);
            if (area > ans)
                ans = area;
        }
        cout << ans << endl;
    }
    return 0;
}
