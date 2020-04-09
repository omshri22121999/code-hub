#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;
bool zeros(int l)
{
    return (l == 0);
}
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
        string a;
        vector<ll> num;
        for (int i = 0; i < 26; i++)
        {
            num.push_back(0);
        }
        cin >> a;
        if (a.size() <= 2)
            cout << "Dynamic\n";
        else
        {
            ll l = a.size();
            for (ll i = 0; i < l; i++)
            {
                num[a[i] - 97]++;
            }
            vector<ll>::iterator iter = remove_if(num.begin(), num.end(), zeros);
            num.resize(iter - num.begin());
            sort(num.begin(), num.end());
            ll length = num.size(), fib_check = 1;
            if ((num[2] == num[1] + num[0]) && num[3] == num[0] + num[2])
            {
                ll temp = num[0];
                num[0] = num[1];
                num[1] = temp;
            }
            for (ll i = 2; i < length; i++)
            {
                if (num[i] != num[i - 1] + num[i - 2])
                {
                    fib_check = 0;
                    break;
                }
            }
            if (fib_check)
                cout << "Dynamic\n";
            else
                cout << "Not\n";
        }
    }
    return 0;
}