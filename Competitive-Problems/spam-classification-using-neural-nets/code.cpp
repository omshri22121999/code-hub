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

    ll t;
    cin >> t;
    while (t--)
    {
        ll n, minx, maxx, spam = 0, non_spam = 0, x, y;
        cin >> n >> minx >> maxx;
        vector<ll> w, b, val;
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            w.push_back(x);
            b.push_back(y);
        }
        if (minx == maxx)
        {
            if (minx & 1)
                spam++;
            else
                non_spam++;
        }
        else
        {
            if (minx & 1 && maxx & 1)
            {
                non_spam = (maxx - minx) / 2;
                spam = non_spam + 1;
            }
            else if (!(minx & 1) && !(maxx & 1))
            {
                spam = (maxx - minx) / 2;
                non_spam = spam + 1;
            }
            else
            {
                non_spam = spam = (maxx - minx + 1) / 2;
            }
            for (int i = 0; i < n; i++)
            {
                if (w[i] & 1 && b[i] & 1)
                {
                    ll temp = spam;
                    spam = non_spam;
                    non_spam = temp;
                }
                if (!(w[i] & 1) && !(b[i] & 1))
                {
                    non_spam += spam;
                    spam = 0;
                }
                if (!(w[i] & 1) && b[i] & 1)
                {
                    spam += non_spam;
                    non_spam = 0;
                }
            }
        }
        cout << non_spam << ' ' << spam << endl;
    }
    return 0;
}
