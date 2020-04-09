#include <bits/stdc++.h>
#define ll unsigned long long
#define ui unsigned int
using namespace std;
class BST
{
    ll data;
    BST *left, *right;

public:
    BST();

    BST(ll);

    BST *Insert(BST *, ll);
    bool Search(BST *, ll);
};

BST ::BST() : data(0), left(NULL), right(NULL) {}

BST ::BST(ll value)
{
    data = value;
    left = right = NULL;
}

BST *BST ::Insert(BST *root, ll value)
{
    if (!root)
    {
        return new BST(value);
    }

    if (value > root->data)
    {
        root->right = Insert(root->right, value);
    }
    else
    {
        root->left = Insert(root->left, value);
    }

    return root;
}

bool BST::Search(BST *root, ll value)
{
    if (!root)
    {
        return false;
    }
    else
    {
        if (root->data == value)
        {
            return true;
        }
        else
        {
            if (root->data < value)
            {
                return Search(root->right, value);
            }
            else
            {
                return Search(root->left, value);
            }
        }
    }
}

int main(void)
{
    ifstream cin("input.txt");
    ofstream cout("output.txt");
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        ll n, x, ans = 0;
        BST b, *root = NULL;
        vector<ll> a;
        cin >> n;
        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            if (x <= n)
            {
                if (b.Search(root, x))
                {
                    ans++;
                }
                else
                {
                    if (root == NULL)
                    {
                        root = b.Insert(root, x);
                    }
                    else
                    {
                        b.Insert(root, x);
                    }
                }
            }
            else
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
