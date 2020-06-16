#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;

void t_swap(char &a, char &b, char &c)
{
    char t = a;
    a = b;
    b = c;
    c = t;
}
void d_swap(pair<int, int> &a, pair<int, int> &b)
{
    pair<int, int> t = a;
    a = b;
    b = t;
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
        for (int i = 0; i < 9; i++)
        {
            string p;
            cin >> p;
            for (auto &i : p)
                if (i == '2')
                    i = '1';
            cout << p << endl;
        }
    }
    return 0;
}
