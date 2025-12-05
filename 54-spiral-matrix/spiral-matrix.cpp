class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        int r=n-1 , d=m-1 , l=0 , u=0;
        vector<int> ans;

        while(u<=d && l<=r){
            // right
            for(int j=l;j<=r;j++){
               ans.push_back(matrix[u][j]);
            }
            u++;
            //down
            for(int i=u;i<=d;i++){
                ans.push_back(matrix[i][r]);
            }
            r--;
            //left
            if (u <= d) {
                for (int j = r; j >= l; j--)
                    ans.push_back(matrix[d][j]);
                d--;
            }

            //up
            if (l <= r) {
                for (int i = d; i >= u; i--)
                    ans.push_back(matrix[i][l]);
                l++;
            }

        }
        return ans;
    }
};