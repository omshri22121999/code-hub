#include <bits/stdc++.h>
#define ll long long
using namespace std;

int palindrome_check(string s)
{
    ll len = s.length();
    for (ll i = 0, j = len - 1; i < j; i++, j--)
    {
        while (s[i] == s[i + 1])
            i++;
        while (s[j] == s[j - 1])
            j--;

        if (s[i] != s[j])
        {
            return 0;
        }
    }
    return 1;
}

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        string s;
        cin >> n >> s;
        if (palindrome_check(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
