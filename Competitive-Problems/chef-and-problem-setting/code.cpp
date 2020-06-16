#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'

using namespace std;

typedef long long ll;

ll sum(char a[])
{
    ll j = 0;
    for (int i = 0; i < strlen(a); i++)
    {
        j += a[i] - '0';
    }
    return j;
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
        ll n, m, count[3] = {0};
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            char a[30], b[50];
            cin >> a >> b;
            if (strlen(b) == sum(b))
            {
                if (strcmp(a, "correct") == 0)
                    count[0]++;
                else
                    count[1]++;
            }
            else if (strcmp(a, "wrong") == 0)
                count[0]++;
            else
                count[2]++;
        }
        if (count[2] != 0)
            cout << "INVALID" << endl;
        else if (count[2] == 0 && count[1] != 0)
            cout << "WEAK" << endl;
        else
            cout << "FINE" << endl;
    }
    return 0;
}
