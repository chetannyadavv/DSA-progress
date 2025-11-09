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
int main()
{
    node *head = NULL;
    insertAtHead(head, 4);
    insertAtHead(head, 41);
    insertAtHead(head, 42);
    insertAtHead(head, 44);
    view(head);
    cout << endl;
    insertAtMiddle(head, 46, 0);
    insertAtTail(head, 50);
    view(head);
    cout << "\n"
         << search(head, 5);
}