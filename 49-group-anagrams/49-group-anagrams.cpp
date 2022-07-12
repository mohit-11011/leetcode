class Solution {
public:
    static bool cmp(string s,string x)
    {
        return s.size()>x.size();
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        sort(strs.begin(),strs.end(),cmp);
        map<int,map<char,int>> x;
        for(int i=0;i<strs.size();i++)
        {
            string temp=strs[i];
            for(int j=0;j<temp.size();j++)
            {
                x[i][temp[j]]++;
            }
       }
        vector<vector<string>> ans;
       // map<string,int> parent;
        map<int,bool> added;
        vector<string> temp;
        for(int i=0;i<strs.size();i++)
        {
             if(added[i]==false)
             {
                 cout<<"pushing "<<i<<" in initial"<<endl;
                 temp.push_back(strs[i]);
                added[i]=true;
            
            
            for(int j=i+1;j<strs.size();j++)
            {
                if(x[i]==x[j])
                {
                    cout<<i<<" = "<<j<<endl;
                    //cout<<parent[strs[j]]<<endl;
                    if(added[j]==false)
                    {
                        cout<<"pushing "<<j<<" in condition"<<endl;
                        added[j]=true;
                        
                        temp.push_back(strs[j]);
                    }
                }
                if(strs[i].size()!=strs[j].size())
                {
                    break;
                }
                
            }
            }
            if(temp.size()>0)
            {
                ans.push_back(temp);
            }
            
            temp.clear();
            
        }
        
        return ans;
        
    }
};