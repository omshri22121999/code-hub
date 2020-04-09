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
        vector<vector<ll>> per;
        for (int i = 0; i < 3; i++)
        {
            vector<ll> attr;
            ll num1, num2, num3, numtot;
            cin >> num1 >> num2 >> num3;
            numtot = num1 + num2 + num3;
            attr.push_back(numtot);
            attr.push_back(num1);
            attr.push_back(num2);
            attr.push_back(num3);
            per.push_back(attr);
        }
        sort(per.begin(), per.end());
        if (per[0][0] == per[1][0] || per[1][0] == per[2][0])
            cout << "no\n";
        else
        {
            int state = 1;
            for (int i = 0; i < 2; i++)
            {
                if (!(per[i + 1][1] >= per[i][1] && per[i + 1][2] >= per[i][2] && per[i + 1][3] >= per[i][3]))
                {
                    state = 0;
                    break;
                }
            }
            if (state)
                cout << "yes\n";
            else
                cout << "no\n";
        }
    }
    return 0;
}
