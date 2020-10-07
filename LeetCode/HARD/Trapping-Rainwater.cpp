class Solution {
public:
    int trap(vector<int>& height) {
        
        int n = height.size();
        int l = 0, r = n-1, leftmax = 0, rightmax = 0;
        int ans = 0;
        
        while (l < r)
        {
            
            if (height[l] < height[r]) 
            {
                if (leftmax < height[l])
                    leftmax=height[l];
                
                else 
                     ans += leftmax - height[l];
                
                l++;
                
            }
            else
            {
                if (rightmax < height[r])
                    rightmax = height[r];
                
                else 
                    ans += rightmax - height[r];
                
                r--;
            }
            
        }
        return ans;
        
    }
};