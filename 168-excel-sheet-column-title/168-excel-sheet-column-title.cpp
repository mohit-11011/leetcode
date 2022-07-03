class Solution {
public:
    string convertToTitle(int columnNumber) {
        string temp;
        int i=columnNumber;
        while(i>0)
        {
            int x=i%26;
            if(x==0)
                x=26;
            //cout<<"x "<<x<<endl;
            temp=temp+char(x+'A'-1);
            i=i/26;
            //cout<<"i "<<i<<endl;
            if(x==26)
                i--;
        }
        reverse(temp.begin(),temp.end());
        return temp;
    }
};