class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
       int maxWater = 0;
       int left= 0, right = n - 1; 

       while (left <right) {
           int wid = right - left;  
           int minHeight = min(height[left], height[right]); 
           maxWater = max(maxWater, wid * minHeight);

           if (height[left] < height[right])
               left++;
           else
               right--;
       }
       return maxWater;
   }
};
