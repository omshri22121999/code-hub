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

    int m;
    float bal;
    cin >> m >> bal;
    if (m + 0.5 > bal)
        cout << bal;
    else if (m % 5 != 0)
        cout << bal;
    else
        cout << (bal - m - 0.5);
    return 0;
}
