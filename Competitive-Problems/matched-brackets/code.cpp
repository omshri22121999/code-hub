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
    vector<char> s;
    while (t--)
    {
        int p;
        cin >> p;
        if (p == 1)
        {
            s.push_back('(');
        }
        else
        {
            s.push_back(')');
        }
    }
    ll nest_depth_ans = 0, first_nest_depth_ans = 0, length_max_ans = 0, first_length_max_ans = 0, nest_depth = 0, length_max = 0, first_length_max = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(')
        {
            length_max++;
            if (nest_depth == 0)
            {
                first_length_max = i + 1;
            }
            nest_depth++;
            if (nest_depth > nest_depth_ans)
            {
                nest_depth_ans = nest_depth;
                first_nest_depth_ans = i + 1;
            }
        }
        else
        {
            length_max++;
            nest_depth--;
            if (nest_depth == 0)
            {
                if (length_max > length_max_ans)
                {
                    length_max_ans = length_max;
                    first_length_max_ans = first_length_max;
                }
                length_max = 0;
            }
        }
    }
    cout << nest_depth_ans << ' ' << first_nest_depth_ans << ' ' << length_max_ans << ' ' << first_length_max_ans;
    return 0;
}
