#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int D)
    {
        data = D;
        left = NULL;
        right = NULL;
    }
};

node *insertinBST(node *root, int d)
{
    if (root == NULL)
        return new node(d);
    if (d <= root->data)
        root->left = insertinBST(root->left, d);
    else
        root->right = insertinBST(root->right, d);

    return root;
}

void inOrder(node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}
node *build()
{

    int d;
    cin >> d;
    node *root = NULL;
    while (d != 1)
    {
        root = insertinBST(root, d);
        cin >> d;
    }
    return root;
}

bool search(node *root, int d)
{
    if (root == NULL)
        return false;
    if (root->data == d)
        return true;
    if (d < root->data)
        return search(root->left, d);
    else
        return search(root->right, d);
}

int main()
{
    node *root = build();
    cout << "\n";
    inOrder(root);
    return 0;
}