class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix[0].size();
        int n = matrix.size();
        // int rows[n] = {0};
        // int cols[m] = {0};
        vector <int> rows (n,0);
        vector <int> cols (m,0);
        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j]==0){
                    rows[i]=1;
                    cols[j]=1;
                }
            }
        }
        
        for (int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(rows[i]==1 || cols[j]==1){
                    matrix[i][j]=0;
                }
            }
        }
    }
};