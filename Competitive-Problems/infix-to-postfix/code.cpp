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
        ll n;
        stack<char> s;
        map<char, int>
            precedence = {{'^', 3}, {'/', 2}, {'*', 2}, {'+', 1}, {'-', 1}, {'(', 0}};
        string ans = "";
        cin >> n;
        char p;
        while (n--)
        {
            cin >> p;
            if (isalnum(p))
            {
                ans += p;
            }
            else if (p == '(')
            {
                s.push(p);
            }
            else if (p == ')')
            {
                while (s.top() != '(')
                {
                    ans += s.top();
                    s.pop();
                }
                s.pop();
            }

            else
            {
                while (s.size() > 0 and precedence[p] <= precedence[s.top()])
                {
                    ans += s.top();
                    s.pop();
                }
                s.push(p);
            }
        }
        while (s.size() > 0)
        {
            ans += s.top();
            s.pop();
        }
        cout << ans << endl;
    }
    return 0;
}
