#include <vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int difference=0;
        unordered_map<int,int> m1;
        for (int i = 0; i < nums.size(); i++) {
            difference=target-nums[i];
            if(m1.find(difference)!=m1.end()){
                return{m1[difference] , i};
            }
            m1[nums[i]]=i;
        }
        return {};
    }
};