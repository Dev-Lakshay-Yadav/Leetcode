class Solution {

public:
    string reverseWords(string s) {
        int n = s.length();
        string ans,word;
        
        reverse(s.begin(), s.end());

    for (int i = 0; i < n; i++)
    {
        word.clear();
        while (i < n && s[i] != ' ')
        {
            word += s[i];
            i++;
        }

        reverse(word.begin(), word.end());

        if (word.length() > 0)
        {
            ans += " " + word;
        }
    }
        return ans.substr(1);
    }
};
