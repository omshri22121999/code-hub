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
    ll sum_total = 0;
    cin >> t;
    while (t--)
    {
        ll s[4][4] = {0};

        ll n;
        cin >> n;
        char a;
        int b;
        while (n--)
        {
            cin >> a >> b;
            s[a - 'A'][b / 3 - 1] += 1;
        }
        ll sum = -400;
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                for (int k = 0; k < 4; k++)
                {
                    for (int l = 0; l < 4; l++)
                    {
                        if (i != j && i != k && i != l && j != k && j != l && k != l)
                        {
                            vector<ll> a;
                            a.push_back(s[i][0]);
                            a.push_back(s[j][1]);
                            a.push_back(s[k][2]);
                            a.push_back(s[l][3]);
                            sort(a.begin(), a.end());
                            int sum_new = 0, u = 1;
                            for (auto val : a)
                            {
                                if (val == 0)
                                {
                                    sum_new -= 100;
                                }
                                else
                                {
                                    sum_new += 25 * val * u;
                                }
                                u++;
                            }
                            if (sum < sum_new)
                            {
                                sum = sum_new;
                            }
                        }
                    }
                }
            }
        }
        cout << sum << endl;
        sum_total += sum;
    }
    cout << sum_total;
    return 0;
}
