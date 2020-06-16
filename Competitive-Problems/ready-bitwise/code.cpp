#include <bits/stdc++.h>
#define N 1e9 + 7
#define endl '\n'
#define F 998244353

using namespace std;
typedef long long ll;

ll modInverse(ll a, ll m)
{
    ll m0 = m;
    ll y = 0, x = 1;

    if (m == 1)
        return 0;

    while (a > 1)
    {
        ll q = a / m;
        ll t = m;

        m = a % m, a = t;
        t = y;

        y = x - q * y;
        x = t;
    }
    if (x < 0)
        x += m0;

    return x;
}

ll precedence(char op)
{
    switch (op)
    {
    case '&':
        return 2;
    case '|':
        return 1;
    case '^':
        return 3;
    default:
        return 0;
    }
}
vector<ll> applyEval(vector<ll> a, vector<ll> b, char op)
{
    vector<ll> ans(4, 0);

    switch (op)
    {
    case '&':
        ans[0] = ((a[0] * b[0]) % F + (a[0] * b[1]) % F + (a[0] * b[2]) % F + (a[0] * b[3]) % F + (a[1] * b[0]) % F + (a[2] * b[0]) % F + (a[3] * b[0]) % F + (a[2] * b[3]) % F + (a[3] * b[2]) % F) % F;
        ans[1] = ((a[1] * b[1])) % F;
        ans[2] = ((a[1] * b[2]) % F + (a[2] * b[1]) % F + (a[2] * b[2]) % F) % F;
        ans[3] = ((a[1] * b[3]) % F + (a[3] * b[1]) % F + (a[3] * b[3] % F)) % F;
        return ans;
    case '^':
        ans[0] = ((a[0] * b[0]) % F + (a[1] * b[1]) % F + (a[2] * b[2]) % F + (a[3] * b[3]) % F) % F;
        ans[1] = ((a[0] * b[1]) % F + (a[1] * b[0]) % F + (a[3] * b[2]) % F + (a[2] * b[3]) % F) % F;
        ans[2] = ((a[0] * b[2]) % F + (a[2] * b[0]) % F + (a[1] * b[3]) % F + (a[3] * b[1]) % F) % F;
        ans[3] = ((a[0] * b[3]) % F + (a[3] * b[0]) % F + (a[2] * b[1]) % F + (a[1] * b[2]) % F) % F;
        return ans;
    case '|':
        ans[1] = ((a[1] * b[0]) % F + (a[1] * b[1]) % F + (a[1] * b[2]) % F + (a[1] * b[3]) % F + (a[0] * b[1]) % F + (a[2] * b[1]) % F + (a[3] * b[1]) % F + (a[2] * b[3]) % F + (a[3] * b[2]) % F) % F;
        ans[0] = (a[0] * b[0]) % F;
        ans[2] = ((a[0] * b[2]) % F + (a[2] * b[0]) % F + (a[2] * b[2]) % F) % F;
        ans[3] = ((a[0] * b[3]) % F + (a[3] * b[0]) % F + (a[3] * b[3]) % F) % F;
        return ans;
    default:
        return ans;
    }
}
vector<ll> eval(string s)
{
    stack<vector<ll>> vals;
    stack<char> ops;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            i++;
            continue;
        }
        else if (s[i] == '(')
        {
            ops.push(s[i]);
        }
        else if (s[i] == '#')
        {
            vector<ll> val = {1, 1, 1, 1};
            vals.push(val);
        }
        else if (s[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                vector<ll> val1 = vals.top();
                vals.pop();
                vector<ll> val2 = vals.top();
                vals.pop();
                char op = ops.top();
                ops.pop();
                vals.push(applyEval(val1, val2, op));
            }
            ops.pop();
        }
        else
        {
            while (!ops.empty() && precedence(ops.top()) >= precedence(s[i]))
            {
                vector<ll> val1 = vals.top();
                vals.pop();
                vector<ll> val2 = vals.top();
                vals.pop();
                char op = ops.top();
                ops.pop();
                vals.push(applyEval(val1, val2, op));
            }
            ops.push(s[i]);
        }
    }
    while (!ops.empty())
    {
        vector<ll> val1 = vals.top();
        vals.pop();
        vector<ll> val2 = vals.top();
        vals.pop();
        char op = ops.top();
        ops.pop();

        vals.push(applyEval(val1, val2, op));
    }
    return vals.top();
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
        string exp;
        cin >> exp;
        ll st_cnt = count(exp.begin(), exp.end(), '#');
        ll base = 1;
        for (int i = 0; i < st_cnt; i++)
        {
            base = (base * 4) % F;
        }
        ll den = modInverse(base, F);
        vector<ll> ans = eval(exp);
        vector<ll> fin = {0, 0, 0, 0};
        for (int i = 0; i < 4; i++)
        {
            cout << (ans[i] % F * den % F) % F << ' ';
        }
        cout << endl;
    }
    return 0;
}
