class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i=0;
        int count=0;
        int high=0;
        while(i<nums.size()){
            if(nums[i]!=0){
                count++;
                i++;
            }
            else{
                high=max(high,count);
                count=0;
                i++;
            }
        }
        high=max(high,count);
        return high;
    }
};