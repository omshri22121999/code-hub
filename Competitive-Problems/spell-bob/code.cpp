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
        char card1[3], card2[3];
        cin >> card1 >> card2;
        int b = 0, o = 0, bo = 0;
        for (int j = 0; j < 3; j++)
        {
            if ((card1[j] == 'b' && card2[j] == 'o') || (card1[j] == 'o' && card2[j] == 'b'))
                bo++;
            else if (card1[j] == 'o' || card2[j] == 'o')
                o++;
            else if (card1[j] == 'b' || card2[j] == 'b')
                b++;
        }
        if (((b + bo >= 2 && o + bo >= 1)) && b + o + bo >= 3)
            cout << "yes";
        else
            cout << "no";
        cout << endl;
    }
    return 0;
}
