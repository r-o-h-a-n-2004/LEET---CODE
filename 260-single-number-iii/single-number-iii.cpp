class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        vector<int> v1;
        map<int,int> m1;
        for(int i=0;i<nums.size();i++){
            m1[nums[i]]++;
        }
        for (auto it = m1.begin(); it != m1.end(); ++it) {
            if (it->second == 1 )
                v1.push_back(it->first);
        }
        return v1;
    }
};