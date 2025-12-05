class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> m(numRows);
        for(int i=0;i<numRows;i++){
            m[i].resize(i+1);
            for(int j=0;j<=i;j++){
                if(j!=0 && j!=i)
                    m[i][j]=m[i-1][j-1]+m[i-1][j];
                else
                    m[i][j]=1;
            }
        }
        return m;
    }
};