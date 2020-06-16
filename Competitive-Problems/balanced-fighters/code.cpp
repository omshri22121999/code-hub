#include <bits/stdc++.h>
#define ll long long
using namespace std;
struct Fighter
{
    string name;
    int HP, AT, DF;
    vector<Fighter *> weaker;

    void check_better(Fighter &a, Fighter &b)
    {
        int a_loss = -(a.DF - b.AT);
        int b_loss = -(b.DF - a.AT);
        if (a_loss <= 0 && b_loss > 0)
        {
            a.weaker.push_back(&b);
        }
        if (a_loss > 0 && b_loss <= 0)
        {
            b.weaker.push_back(&a);
        }
        if (a_loss > 0 && b_loss > 0)
        {
            int rounds_a = ceil(float(a.HP) / a_loss);
            int rounds_b = ceil(float(b.HP) / b_loss);
            if (rounds_a > rounds_b)
            {
                a.weaker.push_back(&b);
            }
            else if (rounds_b > rounds_a)
            {
                b.weaker.push_back(&a);
            }
        }
    }
};

class FighterGraph
{
public:
    vector<Fighter *> fighters;

    void set_weaker()
    {
        for (vector<Fighter *>::iterator i = this->fighters.begin(); i < this->fighters.end() - 1; i++)
        {
            for (vector<Fighter *>::iterator j = i + 1; j < this->fighters.end(); j++)
            {
                Fighter().check_better(**i, **j);
            }
        }
    }

    void print_fighters()
    {
        for (vector<Fighter *>::iterator i = this->fighters.begin(); i < this->fighters.end() - 1; i++)
        {
            cout << "Fighter Name : " << (*i)->name << "\n\n";
            cout << "Weaker Fighters : " << endl;
            for (vector<Fighter *>::iterator j = (*i)->weaker.begin(); j < (*i)->weaker.end(); j++)
            {

                cout << (*j)->name << endl;
            }
        }
    }

    void check_triplets()
    {
        vector<string> ans;
        vector<Fighter *> visited;

        for (vector<Fighter *>::iterator i = this->fighters.begin(); i < this->fighters.end(); i++)
        {
            if ((*i)->weaker.size() > 0)
            {
                for (vector<Fighter *>::iterator j = (*i)->weaker.begin(); j < (*i)->weaker.end(); j++)
                {
                    if ((*j)->weaker.size() > 0)
                    {
                        if (find(visited.begin(), visited.end(), *j) != visited.end())
                        {

                            for (vector<Fighter *>::iterator k = (*j)->weaker.begin(); k < (*j)->weaker.end(); k++)
                            {
                                if ((*k)->weaker.size() > 0)
                                {
                                    if (find(visited.begin(), visited.end(), *k) != visited.end())
                                    {
                                        if (find((*k)->weaker.begin(), (*k)->weaker.end(), *i) != (*k)->weaker.end())
                                        {
                                            ans.push_back((*i)->name + ' ' + (*j)->name + ' ' + (*k)->name);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            visited.push_back((*i));
        }
        cout << ans.size() << endl;
        for (vector<string>::iterator s = ans.begin(); s < ans.end(); s++)
        {
            cout << *s << endl;
        }
    }
};

int main(void)
{

    ifstream cin("input.txt");
    ofstream cout("output.txt");

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    FighterGraph fgraph;
    cin >> t;
    Fighter *f;
    while (t--)
    {
        f = new Fighter();
        cin >> f->name >> f->HP >> f->AT >> f->DF;

        fgraph.fighters.push_back(f);
    }

    fgraph.set_weaker();
    fgraph.check_triplets();
}
