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
    std::cin.rdbuf(cin.rdbuf());
    ofstream cout("output.txt");
    std::cout.rdbuf(cout.rdbuf());

    ll t;
    cin >> t;
    while (t--)
    {
        vector<ll> a;
        ll n;
        ll sum = 0, temp[2] = {1, 0}, m;
        cin >> n;
        ll ans = 0;
        unordered_map<int, int> prevSum;
        ll p = n;
        while (n--)
        {
            ll k;
            cin >> k;
            if (k % 2)
            {
                m = 0;
            }
            else
            {
                if (k % 4)
                {
                    m = 1;
                }
                else
                {
                    m = 2;
                }
            }
            sum = sum + m;
            if (sum == 1)
                ans++;

            if (prevSum.find(sum - 1) != prevSum.end())
                ans += prevSum[sum - 1];
            prevSum[sum]++;
        }
        cout << (p * (p + 1) / 2) - ans << endl;
    }
    return 0;
}
