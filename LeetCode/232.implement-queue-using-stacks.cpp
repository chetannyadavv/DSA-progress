/*
 * @lc app=leetcode id=232 lang=cpp
 *
 * [232] Implement Queue using Stacks
 */

// @lc code=start
class MyQueue
{
    stack<int> a;
    stack<int> b;
    stack<int> *notEmpty = &a;
    stack<int> *Empty = &b;
    int size = 0;
    int top;

public:
    MyQueue()
    {
    }

    void push(int x)
    {
        if (size == 0)
            top = x;
        notEmpty->push(x);
        size++;
    }

    int pop()
    {
        if (size == 1)
        {
            int ans = notEmpty->top();
            notEmpty->pop();
            size--;
            return ans;
        }

        while (notEmpty->size() != 1)
        {
            Empty->push(notEmpty->top());
            notEmpty->pop();
        }
        int ans = notEmpty->top();
        notEmpty->pop();
        size--;
        top = Empty->top();
        while (Empty->size())
        {
            notEmpty->push(Empty->top());
            Empty->pop();
        }
        return ans;
    }

    int peek()
    {
        return top;
    }

    bool empty()
    {
        if (!a.size() && !b.size())
            return true;
        return false;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end
