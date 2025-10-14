class Solution {
public:
    int majorityElement(vector<int>& a) {
        int count=0;
        int element;
        int maj=a.size();
        int half=maj/2;
        for(int i=0;i<maj;i++){
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