class Solution {
public:
    int trap(vector<int>& height) {
        
        int n=height.size();
        int leftmax=0,rightmax=0,right=n-1,left=0,res=0;
        while(left<=right)
        {
            if(height[left]<=height[right])
            {
                if(height[left]>=leftmax)leftmax=height[left];   //imp step
                else
                    res+=leftmax-height[left];
                left++;
            }
            else
            {
                if(height[right]>=rightmax)rightmax=height[right];
                else
                    res+=rightmax-height[right];
                right--;
            }
        }
        return res;
    }
    
};
