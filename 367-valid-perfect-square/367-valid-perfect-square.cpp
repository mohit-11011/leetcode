class Solution {
public:
    bool isPerfectSquare(int num) {
       double ans=pow(num,0.5);
        int q=(int)ans;
        float rem=ans-(float)q;
        if(rem==0)
            return true;
        else
            return false; 
    }
};