class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        string merged;
        merged.reserve(word1.length() + word2.length());
        int minLen = min(word1.length(), word2.length());

        for (int i = 0; i < minLen; i++) 
        {
            merged += word1[i];
            merged += word2[i];
        }

        merged += word1.substr(minLen);
        merged += word2.substr(minLen);

        return merged;
    }
};
