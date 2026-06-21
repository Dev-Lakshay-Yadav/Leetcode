class Solution {
    void stringReverse(string& s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            swap(s[i], s[j]);
            j--;
            i++;
        }
    }

public:
    string reverseWords(string s) {
        stringReverse(s);

        string temp, ans;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ' && !temp.empty()) {
                stringReverse(temp);
                ans += temp + ' ';
                temp.clear();
            } else if (s[i] == ' ') {
                continue;
            } else {
                temp.push_back(s[i]);
            }
        }
        if (!temp.empty()) {
            stringReverse(temp);
            ans += temp;
        }

        if (!ans.empty() && ans.back() == ' ')
            ans.pop_back();
        return ans;
    }
};
