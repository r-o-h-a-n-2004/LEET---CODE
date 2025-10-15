class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pc=0;
        int nc=1;
        int size1=nums.size();
        vector<int> v2(size1);
        for(int i=0;i<size1;i++){
            if(nums[i]>0){
                v2[pc]=nums[i];
                pc=pc+2;
            }
            else{
                v2[nc]=nums[i];
                nc=nc+2;
            }
        }
        return v2;
    }
};