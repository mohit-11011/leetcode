class Solution {
public:
    static bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second >b.second);
}
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>> box;
        for(int i=0;i<boxTypes.size();i++)
        {
            box.push_back(make_pair(boxTypes[i][0],boxTypes[i][1]));
        }
        sort(box.begin(),box.end(),sortbysec);
        int ans=0;
        int chose=0;
        for(int i=0;i<box.size();i++)
        {
            if(chose+box[i].first<=truckSize)
            {
                chose+=box[i].first;
                ans+=box[i].first*box[i].second;
            }
            else
            {
                int rem=truckSize-chose;
                ans+=rem*box[i].second;
                break;
            }
        }
        return ans;
        
    }
};