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

    ll n, m;
    unordered_map<string, string> chef_country;
    unordered_map<string, int> chef_points, country_points;
    vector<string> chefs, countries;
    string c, s;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> s;
        chef_country.insert(make_pair(c, s));
        chef_points.insert(make_pair(c, 0));
        country_points.insert(make_pair(s, 0));
        chefs.push_back(c);
        countries.push_back(s);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> c;
        chef_points[c]++;
        country_points[chef_country[c]]++;
    }
    sort(chefs.begin(), chefs.end());
    sort(countries.begin(), countries.end());
    ll mx_chefs = LLONG_MIN, mx_countries = LLONG_MIN;
    string chef_ans, country_ans;
    for (auto i : chefs)
    {
        if (chef_points[i] > mx_chefs)
        {
            mx_chefs = chef_points[i];
            chef_ans = i;
        }
    }
    for (auto i : countries)
    {
        if (country_points[i] > mx_countries)
        {
            mx_countries = country_points[i];
            country_ans = i;
        }
    }
    cout << country_ans << endl
         << chef_ans << endl;
}
