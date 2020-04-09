#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k, z, r = 0;
        vector<ll> a, x, y, X, Y;
        cin >> n >> k;
        while (n--)
        {
            cin >> z;
            x.push_back(z % k);
            y.push_back((k - z % k) % k);
        }
        ll sum = 0;
        for (vector<ll>::iterator i = x.begin(); i < x.end(); i++)
        {
            sum += *i;
            X.push_back(sum);
        }
        sum = 0;
        for (vector<ll>::iterator i = y.end() - 1; i >= y.begin(); i--)
        {
            sum += *i;
            Y.push_back(sum);
        }
        if (*(Y.end() - 1) == 0)
            cout << 0 << endl;
        else
        {
            vector<ll>::iterator i = X.begin(), j = Y.end() - 2;
            for (; i < X.end() - 1; i++, j--)
            {
                if (*i >= *j)
                    break;
            }
            if (i == X.end() - 1)
            {
                cout << *(i) << endl;
            }
            else
            {
                cout << *i - *j << endl;
            }
        }
    }
    return 0;
}