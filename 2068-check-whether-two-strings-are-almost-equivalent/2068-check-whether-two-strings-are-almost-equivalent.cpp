class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        int m1[26];
        int m2[26];
        int diff[26];
        for(int i=0;i<26;i++)
        {
            m1[i]=m2[i]=0;
        }
        for(int i=0;i<word1.size();i++)
        {
            m1[word1[i]-'a']++;
        }
        
        for(int i=0;i<word2.size();i++)
        {
            m2[word2[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
           diff[i]=abs(m1[i]-m2[i]);
        }
        int ans=INT_MIN;
        for(int i=0;i<26;i++)
        {
            ans=max(diff[i],ans);
        }
        if(ans>3)
            return false;
        return true;
    }
};