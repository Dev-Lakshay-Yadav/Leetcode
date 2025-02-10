class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        if(word1.empty())
        {
            return word2;
        }
        if(word2.empty())
        {
            return word1;
        }
        string word3;
        int size1 = word1.size();
        int size2 = word2.size();
        int i=0;
        while(i<max(size1,size2))
        {
            if(i<size1)
            {
                word3+=word1[i];
            }
            if(i<size2)
            {
                word3+=word2[i];
            }
            i++;
        }
        return word3;
    }
};