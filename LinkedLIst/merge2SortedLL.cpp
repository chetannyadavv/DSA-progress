#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

int length(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}

void insertAtHead(node *&head, int d)
{
    node *n = new node(d);
    n->next = head;
    head = n;
}

void deleteAtHead(node *&head)
{
    if (head == NULL)
        return;
    node *temp = head->next;
    delete head;
    head = temp;
}

void view(node *head)
{
    while (head != NULL)
    {
        cout << head->data;
        if (head->next)
            cout << " -> ";
        head = head->next;
    }
    cout << "\n";
}

void insertAtTail(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }

    node *tail = head;
    while (tail->next != NULL)
        tail = tail->next;

    tail->next = new node(d);
}

void insertAtMiddle(node *&head, int d, int p)
{
    if (head == NULL || p == 0)
    {
        insertAtHead(head, d);
        return;
    }
    else if (p >= length(head))
    {
        insertAtTail(head, d);
        return;
    }

    node *temp = head;
    int jump = 1;
    while (jump < p)
    {
        jump++;
        temp = temp->next;
    }

    node *temp2 = new node(d);
    temp2->next = temp->next;
    temp->next = temp2;
}

bool search(node *head, int key)
{
    while (head)
    {
        if (head->data == key)
            return true;
        head = head->next;
    }
    return false;
}

node *takeInput()
{
    int d;
    cin >> d;
    node *head = NULL;

    while (d != -1)
    {
        insertAtHead(head, d);
        cin >> d;
    }
    return head;
}

ostream &operator<<(ostream &os, node *head)
{
    view(head);
    return os;
}

node *merge(node *a, node *b)
{
    if (!a)
        return b;
    if (!b)
        return a;

    node *head = NULL;
    node *tail = NULL;

    if (a->data < b->data)
    {
        head = tail = a;
        a = a->next;
    }
    else
    {
        head = tail = b;
        b = b->next;
    }

    while (a && b)
    {
        if (a->data < b->data)
        {
            tail->next = a;
            tail = a;
            a = a->next;
        }
        else
        {
            tail->next = b;
            tail = b;
            b = b->next;
        }
    }

    tail->next = (a ? a : b);
    return head;
}

int main()
{
    node *head = takeInput();
    cout << head;
    return 0;
}
