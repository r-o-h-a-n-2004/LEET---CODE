class Solution {
public:
    void sortColors(vector<int>& a) {
        int i=0;
        int j=0;
        int k=a.size()-1;
        while(j<=k){
            if(a[j]==0){
                swap(a[j],a[i]);
                i++;
                j++;
            }

            else if(a[j]==1) j++;

            else{
                swap(a[j],a[k]);
                k--;
            }
        }
        
        for(int i=0;i<k;i++){
            cout<<a[i];
        }
    }
};