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
void insertAtHead(node *&head, int d)
{
    if (head == NULL)
    {
        head = new node(d);
        return;
    }
    node *n = new node(d);
    n->next = head;
    head = n;
}
void Deletion(node *&head)
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
        cout << head->data << " -> ";

        head = head->next;
    }
}
int lenght(node *head)
{
    int count = 0;
    while (head != NULL)
    {
        head = head->next;
        count++;
    }
    return count;
}
void insertAtTail(node *&head, int d)
{
    node *tail = head;
    while (tail->next != NULL)
    {
        tail = tail->next;
    }
    node *temp = new node(d);
    tail->next = temp;
}
void insertAtMiddle(node *&head, int d, int p)
{
    if (head == NULL || p == 0)
    {
        insertAtHead(head, d);
        return;
    }
    else if (p > lenght(head))
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
}
void operator<<(ostream &cout, node *head)
{
    view(head);
    return;
}
node *midPoint(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    node *slow = head;
    node *fast = head->next;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow; // mid-prev
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
node *mergeSort(node *head)
{
    if (head == NULL || head->next == NULL)
        return head;
    node *mid = midPoint(head);
    node *a = head;
    node *b = mid->next;
    mid->next = NULL;
    a = mergeSort(a);
    b = mergeSort(b);
    node *c = merge(a, b);
    return c;
}
int main()
{
}