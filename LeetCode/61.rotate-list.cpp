/*
 * @lc app=leetcode id=61 lang=cpp
 *
 * [61] Rotate List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *rotateRight(ListNode *head, int k)
    {
        if (!head || !head->next || k == 0)
            return head;
        ListNode *tail = head;
        int size = 1;
        while (tail->next)
        {
            tail = tail->next;
            size++;
        }
        k %= size;
        if (k == 0)
            return head;
        tail->next = head;
        int steps = size - k - 1;
        ListNode *newTail = head;
        for (int i = 0; i < steps; i++)
        {
            newTail = newTail->next;
        }
        ListNode *newHead = newTail->next;
        newTail->next = nullptr;
        return newHead;
    }
};
// @lc code=end
