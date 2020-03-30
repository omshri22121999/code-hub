#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(void)
{
    ifstream cin("input.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    ofstream cout("output.txt");
    std::cout.rdbuf(cout.rdbuf());

    ll t;
    cin >> t;
    while (t--)
    {
        cout << t;
    }
    return 0;
}
