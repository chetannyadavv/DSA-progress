/*
 * @lc app=leetcode id=138 lang=cpp
 *
 * [138] Copy List with Random Pointer
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (!head)
            return nullptr;

        unordered_map<Node *, Node *> mp;

        // 1) Create all new nodes
        Node *cur = head;
        while (cur)
        {
            mp[cur] = new Node(cur->val);
            cur = cur->next;
        }

        // 2) Assign next and random pointers
        cur = head;
        while (cur)
        {
            Node *copy = mp[cur];
            copy->next = mp[cur->next];     // mp[nullptr] will be nullptr
            copy->random = mp[cur->random]; // mp[nullptr] will be nullptr
            cur = cur->next;
        }

        return mp[head];
    }
};
// @lc code=end
