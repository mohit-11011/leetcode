class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int> s;
        for(int i=0;i<arr.size();i++)
        {
            s[arr[i]]++;
        }
        vector<int> freq;
        for(auto i:s)
        {
            freq.push_back(i.second);
        }
         set<int> unique(freq.begin(),freq.end());
        return freq.size()==unique.size();
    }
};