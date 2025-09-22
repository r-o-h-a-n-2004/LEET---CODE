#include <vector>

using namespace std;

class Solution {
public:
    // The logic is inside a method called "twoSum"
    // It accepts the inputs as parameters: vector<int>& nums, int target
    vector<int> twoSum(vector<int>& nums, int target) {
        
        // The core logic for finding the pair remains the same
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j < nums.size(); j++) {
                
                if (nums[i] + nums[j] == target) {
                    // Instead of printing, we return the result
                    return {i, j};
                }
            }
        }
        
        // Return an empty vector if no solution is found
        return {};
    }
};