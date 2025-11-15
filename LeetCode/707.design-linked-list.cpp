/*
 * @lc app=leetcode id=707 lang=cpp
 *
 * [707] Design Linked List
 */

// @lc code=start
class MyLinkedList
{
public:
    struct Node
    {
        int val;
        Node *next;
        Node(int d)
        {
            val = d;
            next = nullptr;
        }
    };
    Node *head;
    int size;
    MyLinkedList()
    {
        head = nullptr;
        size = 0;
    }

    int get(int index)
    {
        if (index < 0 || index >= size)
            return -1;
        Node *curr = head;
        while (index--)
            curr = curr->next;
        return curr->val;
    }

    void addAtHead(int val)
    {
        Node *node = new Node(val);
        node->next = head;
        head = node;
        size++;
    }

    void addAtTail(int val)
    {
        Node *node = new Node(val);
        if (!head)
            head = node;
        else
        {
            Node *curr = head;
            while (curr->next)
                curr = curr->next;
            curr->next = node;
        }
        size++;
    }

    void addAtIndex(int index, int val)
    {
        if (index < 0 || index > size)
            return;
        if (index == 0)
        {
            addAtHead(val);
            return;
        }
        Node *curr = head;
        for (int i = 0; i < index - 1; i++)
            curr = curr->next;
        Node *node = new Node(val);
        node->next = curr->next;
        curr->next = node;
        size++;
    }

    void deleteAtIndex(int index)
    {
        if (index < 0 || index >= size)
            return;
        if (index == 0)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
        }
        else
        {
            Node *curr = head;
            for (int i = 0; i < index - 1; i++)
                curr = curr->next;
            Node *temp = curr->next;
            curr->next = temp->next;
            delete temp;
        }
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end
