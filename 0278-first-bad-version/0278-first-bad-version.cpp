// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1;
        int e=n;
        long long int temp=s+(e-s)/2;
        while(s<e)
        {
            
            bool check=isBadVersion(temp);
            if(check)
            {
                e=temp;
            }
            else
            {
                s=temp+1;
            }
            temp=s+(e-s)/2;
        }
        return temp;
    }
};