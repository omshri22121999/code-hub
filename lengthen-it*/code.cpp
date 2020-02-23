#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    std::cout.rdbuf(cout.rdbuf());

    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        vector<ll> k;
        map<int, int> m;
        cin >> n;
        while (n--)
        {
            ll z;
            cin >> z;
            k.push_back(z);
            m[z] = 1;
        }
        for (auto i : k)
        {
            ll z = 0, p = i;
            while (m[p] == 1)
            {
                z++;
                p--;
            }
            cout << z << ' ';
        }
        cout << endl;
    }
    return 0;
}
