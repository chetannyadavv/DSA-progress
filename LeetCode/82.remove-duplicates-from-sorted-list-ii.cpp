/*
 * @lc app=leetcode id=82 lang=cpp
 *
 * [82] Remove Duplicates from Sorted List II
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
    ListNode *deleteDuplicates(ListNode *head)
    {
        if (!head)
            return nullptr;

        ListNode *dummy = new ListNode(0, head);
        ListNode *prev = dummy; // node before the block you're evaluating
        ListNode *cur = head;   // start of the block you're evaluating

        while (cur)
        {
            // move cur while duplicates continue
            while (cur->next && cur->val == cur->next->val)
            {
                cur = cur->next;
            }

            // if prev->next == cur, it means no duplicates were skipped
            if (prev->next == cur)
            {
                prev = prev->next; // keep the unique node
            }
            else
            {
                // duplicates found → skip entire block
                prev->next = cur->next;
            }

            cur = cur->next; // move on
        }

        return dummy->next;
    }
};
// @lc code=end
