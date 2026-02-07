#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
        return NULL;
    Node *root = new Node(d);
    root->left = buildTree();
    root->right = buildTree();

    return root;
}
void print(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    print(root->left);
    print(root->right);
}
void printIn(Node *root)
{
    if (root == NULL)
        return;
    printIn(root->left);
    cout << root->data << " ";
    printIn(root->right);
}
void printPost(Node *root)
{
    if (root == NULL)
        return;
    printPost(root->left);
    printPost(root->right);
    cout << root->data << " ";
}
int hieght(Node *root)
{
    if (root == NULL)
        return 0;
    int ls = hieght(root->left);
    int rs = hieght(root->right);
    return max(ls, rs) + 1;
}
void printKthLevel(Node *root, int k)
{
    if (root == NULL || k <= 0)
        return;
    if (k == 1)
    {
        cout << root->data << " ";
        return;
    }
    printKthLevel(root->left, k - 1);
    printKthLevel(root->right, k - 1);
}
void printLevel(Node *root)
{
    for (int i = 1; i <= hieght(root); i++)
    {
        printKthLevel(root, i);
        cout << endl;
    }
}
// BFS Using a Queue
void BFS(Node *root)
{
    queue<Node *> toPrint;
    toPrint.push(root);
    toPrint.push(NULL);
    while (!toPrint.empty())

    {

        Node *curr = toPrint.front();
        if (curr == NULL)
        {
            cout << endl;
            toPrint.pop();
            if (!toPrint.empty())
                toPrint.push(NULL);
        }
        else
        {
            cout << curr->data << " ";
            toPrint.pop();
            if (curr->left)
                toPrint.push(curr->left);
            if (curr->right)
                toPrint.push(curr->right);
        }
    }
    return;
}

// Find Diameter of the tree
int diameter(Node *root)
{
    if (root == NULL)
        return 0;
    int h1 = hieght(root->left);
    int h2 = hieght(root->right);
    int op1 = h1 + h2;
    int op2 = diameter(root->left);
    int op3 = diameter(root->right);
    return max(op1, max(op2, op3));
}

// Count Number of Nodes
int count(Node *root)
{
    if (root == NULL)
        return 0;
    return count(root->left) + count(root->right) + 1;
}
// Replace node with sum of its children
int replace(Node *root)
{
    if (root == NULL)
        return 0;
    if (root->left == NULL && root->right == NULL)
        return root->data;
    int leftSum = replace(root->left);
    int rightSum = replace(root->right);
    int temp = root->data;
    root->data = leftSum + rightSum;
    return temp + root->data;
}
class HBPair
{
public:
    int hieght;
    bool balance;
};
HBPair isHeightBalanced(Node *root)
{
    HBPair p;
    if (root == NULL)
    {
        p.hieght = 0;
        p.balance = true;
        return p;
    }
    HBPair left = isHeightBalanced(root->left);
    HBPair right = isHeightBalanced(root->right);
    p.hieght = max(left.hieght, right.hieght) + 1;
    if (abs(left.hieght - right.hieght <= 1) and left.balance and right.balance)
    {

        p.balance = true;
    }
    else
        p.balance = false;
    return p;
}
int main()
{
    Node *root = buildTree();
    print(root); // ROOT -> LEFT -> RIGHT
    cout << endl;
    printIn(root); // LEFT -> ROOT -> RIGHT
    cout << endl;
    printPost(root); // LEFT -> RIGHT -> ROOT
    cout << endl;
    BFS(root);
    cout << endl;
    // printLevel(root);
    // 10 20 40 80 -1 -1 -1 50 -1 -1 30 60 -1 -1 70 90 -1 -1 -1
    return 0;
}