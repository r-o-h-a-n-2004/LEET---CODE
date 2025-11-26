class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int ,int> um;
        int counter = 0;
        um[0] = 1;
        int tsum = 0;
        
        for(int i = 0; i < nums.size(); i++) {
            tsum += nums[i];
            
            if(um.count(tsum - k)) {
                counter += um[tsum - k];
            }
            um[tsum]++; 
        }
        return counter;
    }
};