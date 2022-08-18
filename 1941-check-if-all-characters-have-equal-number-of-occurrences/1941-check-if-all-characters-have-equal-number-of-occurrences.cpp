class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int> x;
        for(auto i:s)
        {
            x[i]++;
        }
        vector<int> y;
        for(auto i:x)
        {
            y.push_back(i.second);
        }
        int temp=y[0];
        for(auto i:y)
        {
            if(i!=temp)
            {
                return false;
            }
        }
        return true;
            
    }
};