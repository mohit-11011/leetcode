class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
        int added=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
            int temp=digits[i];
            if(temp!=9)
            {
                digits[i]=digits[i]+1;
                return digits;
            }
            else
            {
                digits[i]=0;
            }
            
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};