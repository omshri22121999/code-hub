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
        ll n, a, b;
        cin >> n >> a >> b;
        string p(a, 'a');
        for (int i = 0; i < n; i++)
        {
            cout << static_cast<char>('a' + (i % b) % a);
        }
        cout << endl;
    }
    return 0;
}
