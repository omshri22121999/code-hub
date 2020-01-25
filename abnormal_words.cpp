//Abnormal Words
//Done By : Om Shri Prasath
//Date : 24 Jan 2020

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main(void)
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    std::cin.rdbuf(cin.rdbuf());
    std::cout.rdbuf(cout.rdbuf());

    char t;
    int s;
    string word;
    cin >> t;
    cin >> s;
    cin >> word;
    if (t == 'E')
    {
        string out = "";
        for (int i = 0; i < word.length(); i++)
        {
            out += (word[i] + s - 'a') % 26 + 'a';
        }
        cout << out << "\n";
    }
    else
    {
        string out = "";
        for (int i = 0; i < word.length(); i++)
        {
            char x = (word[i] - s - 'a') % 26;
            out += (x >= 0) ? x + 'a' : 26 + x + 'a';
        }
        cout << out << "\n";
    }
    return 0;
}
