class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=1;
        int j=1;
        while(1){
            if(i==nums.size()){
                break;
            }
            if(nums[i]==nums[i-1]) i++;
            else{
                nums[j]=nums[i];
                i++;
                j++;
            }
        }
        nums.erase(nums.begin()+j,nums.end());
        return j;

    }

};