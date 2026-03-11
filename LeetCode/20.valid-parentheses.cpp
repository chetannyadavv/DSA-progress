/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 */

// @lc code=start
class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> st;
        for (char c : s)
        {
            if (c == '(' || c == '{' || c == '[')
                st.push(c);
            else
            {
                if (st.empty())
                    return false;
                char top = st.top();
                st.pop();

                if (c == ')' and top != '(')
                    return false;
                if (c == '}' and top != '{')
                    return false;
                if (c == ']' and top != '[')
                    return false;
            }
        }
        return st.empty();
    }
};
// @lc code=end
