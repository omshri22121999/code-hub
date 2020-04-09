#include <bits/stdc++.h>
#define ll long long
using namespace std;

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
        ll n;
        string s;
        ll i;
        map<string, vector<ll>> k;
        cin >> n;
        while (n--)
        {
            cin >> s >> i;
            if (k.count(s) == 0)
            {
                k.insert(pair<string, vector<ll>>(s, {0, 0}));
            }
            k.at(s)[i]++;
        }
        ll sum = 0;
        for (map<string, vector<ll>>::iterator itr = k.begin(); itr != k.end(); itr++)
        {
            sum += (itr->second[0] > itr->second[1]) ? itr->second[0] : itr->second[1];
        }
        cout << sum << '\n';
    }
    return 0;
}
