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

    string n;
    ll t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ll i = n.size() - 1;
        while (n[i] == '0' && i > 0)
        {
            i--;
        }
        while (i >= 0)
        {
            cout << n[i];
            i--;
        }
        cout << endl;
    }
    return 0;
}
