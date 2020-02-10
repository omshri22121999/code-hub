#include <bits/stdc++.h>
#define ll long long
using namespace std;

void print_vector(vector<ll> a)
{
    for (vector<ll>::iterator i = a.begin(); i < a.end(); i++)
    {
        cout << *i << " ";
    }
    cout << '\n';
}
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
        ll n, k, z;
        vector<ll> a;
        cin >> n >> k;
        while (n--)
        {
            cin >> z;
            a.push_back(z);
        }
        // print_vector(a);
        vector<ll>::iterator i = a.begin(),
                             j = a.end() - 1;
        ll r = 0;
        while (i < j)
        {
            // print_vector(a);
            // cout << "i is :" << *i << '\n';
            // cout << "j is :" << *j << '\n';
            if (*i % k > 0)
            {
                r += *i % k;
                *i -= *i % k;
            }
            else
            {
                i++;
            }
            // cout << "r is :" << r << '\n';

            if (*j % k > 0)
            {
                ll m = k - (*j % k);

                // cout << "m is :" << m << '\n';
                if (m >= r)
                {

                    // cout << "m is greater" << '\n';
                    *j += r;
                    r = 0;
                }
                else
                {
                    // cout << "r is greater" << '\n';
                    *j += m;
                    r -= m;
                }
            }
            else
            {
                j--;
            }
        }
        // print_vector(a);
        cout << r + *j % k << '\n';
    }
    return 0;
}
