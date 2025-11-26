class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int> st;
        for (int x : nums) {
            st.insert(x);
        }
        int counter=1;
        int maximum=1;
        for(int x:st){
            if(st.count(x-1)==0){
                int y=x;
                while(st.count(y+1)==1){
                    counter++;
                    y++;
                    maximum=max(maximum, counter);
                }
                counter=1;
            }
        }
        return maximum;
    }
};