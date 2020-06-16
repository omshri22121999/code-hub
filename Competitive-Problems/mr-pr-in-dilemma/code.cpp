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
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a == b)
            cout << "YES\n";
        else if (a != b && c == d)
            cout << "NO\n";
        else if (abs(a - b) % abs(c - d) == 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
