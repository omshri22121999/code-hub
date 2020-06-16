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
        ll n;
        string nat;
        cin >> n >> nat;
        ll laddus = 0;
        while (n--)
        {
            string k;
            cin >> k;
            if (k == "CONTEST_WON")
            {
                int z;
                cin >> z;
                laddus += 300 + max(0, 20 - z);
            }
            else if (k == "TOP_CONTRIBUTOR")
            {
                laddus += 300;
            }
            else if (k == "BUG_FOUND")
            {
                ll z;
                cin >> z;
                laddus += z;
            }
            else if (k == "CONTEST_HOSTED")
            {
                laddus += 50;
            }
        }
        if (nat == "INDIAN")
        {
            cout << laddus / 200 << endl;
        }
        else
        {
            cout << laddus / 400 << endl;
        }
    }
    return 0;
}
