#include <bits/stdc++.h>
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
        ll n;
        int k;
        cin >> n;
        vector<int> a;
        while (n--)
        {
            cin >> k;
            a.push_back(k);
        }
        int i = 0;
        while (!a[i++])
            ;
        ll sum = 1;
        while (i < a.size())
        {
            if (a[i] == 1)
            {
                if (sum < 6)
                {
                    sum = -1;
                    cout << "NO\n";
                    break;
                }
                else
                {
                    sum = 1;
                }
            }
            else
            {
                sum++;
            }
            i++;
        }
        if (sum != -1)
            cout << "YES\n";
    }
    return 0;
}
