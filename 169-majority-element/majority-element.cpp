class Solution {
public:
    int majorityElement(vector<int>& a) {
        int count=0;
        int element;
        for(int i=0;i<a.size();i++){
            if(count==0){
                element=a[i];
                count++;
            }
            else if(a[i]==element) count++;
            else count--;
        }
        return element;
    }
};