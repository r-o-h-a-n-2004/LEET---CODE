class Solution {
public:
    int singleNumber(vector<int>& nums)     {
        map<int,int> m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for (auto it = m1.begin(); it != m1.end(); ++it) {
            if (it->second == 1)
                return it->first;
        }
        return 0;
    }
};