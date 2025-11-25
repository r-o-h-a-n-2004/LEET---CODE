class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int brek=-1;
        int j=-1;
        for(int i=n-1; i>0; i--){
            if(nums[i-1]<nums[i]){
                brek=nums[i-1];
                j=i-1;
                break;
            }
        }

        if(j!=-1){
            for(int i=n-1; i>0; i--){
                if(nums[i]>brek){
                    swap(nums[i],nums[j]);
                    break;
                }
            }
            reverse(nums.begin() + j+1, nums.end());

            for(int i=0;i<n;i++){
                cout<<nums[i];
            }
        }
        else{
            reverse(nums.begin() , nums.end());
            for(int i=0;i<n;i++){
                cout<<nums[i];
            }
        }
    }
};