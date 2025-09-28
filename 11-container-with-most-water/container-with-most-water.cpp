class Solution {
public:
    int maxArea(vector<int>& height) {
        int i = 0;
        int j = height.size() - 1;
        int maxArea = 0;
        
        while(i < j) {
            int currentArea;
            if(height[i] < height[j]) {
                currentArea = height[i] * (j - i);
                maxArea = max(maxArea, currentArea);
                i++;
            } else {
                currentArea = height[j] * (j - i);
                maxArea = max(maxArea, currentArea);
                j--;
            }
        }
        return maxArea;
    }
};