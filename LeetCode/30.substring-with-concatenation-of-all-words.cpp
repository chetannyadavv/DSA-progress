/*
 * @lc app=leetcode id=30 lang=cpp
 *
 * [30] Substring with Concatenation of All Words
 */

// @lc code=start
class Solution
{
public:
    vector<int> findSubstring(string s, vector<string> &words)
    {
        vector<int> result;
        if (words.empty() || s.empty())
            return result;

        int wordLen = words[0].size();
        int wordCount = words.size();
        int totalLen = wordLen * wordCount;

        if (s.size() < totalLen)
            return result;

        unordered_map<string, int> wordFreq;
        for (auto &w : words)
            wordFreq[w]++;

        // Try every possible offset
        for (int offset = 0; offset < wordLen; ++offset)
        {
            unordered_map<string, int> windowFreq;
            int left = offset;
            int right = offset;
            int count = 0;

            while (right + wordLen <= s.size())
            {
                string word = s.substr(right, wordLen);
                right += wordLen;

                if (wordFreq.find(word) != wordFreq.end())
                {
                    windowFreq[word]++;
                    count++;

                    // If a word occurs too many times, shrink from the left
                    while (windowFreq[word] > wordFreq[word])
                    {
                        string leftWord = s.substr(left, wordLen);
                        windowFreq[leftWord]--;
                        left += wordLen;
                        count--;
                    }

                    if (count == wordCount)
                        result.push_back(left);
                }
                else
                {
                    // Reset window
                    windowFreq.clear();
                    count = 0;
                    left = right;
                }
            }
        }

        return result;
    }
};
// @lc code=end
