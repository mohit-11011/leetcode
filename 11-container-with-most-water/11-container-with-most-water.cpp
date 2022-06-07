class Solution {
public:
    int maxArea(vector<int>& height) {
        int i, j,temp;
        i=0;
        j=height.size()-1;
        int max=0;
        while(i!=j)
        {
            //int temp=(min(arr[i],arr[j]))*(j-i);
            if(height[i]<height[j])
            {
                temp=height[i]*(j-i);
                i++;
                
            }
            else
            {
                temp=height[j]*(j-i);
                j--;

            }
            if(temp>max)
            {
                max=temp;
            }
        }
        return max;
    }
};