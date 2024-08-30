class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int ans[n][n];
        int left = 0;
        int top = 0;
        int right = n-1;
        int bottom = n-1;
        int element = 1;
        while(left <= right && top <= bottom){
            for(int i=left ; i<=right; i++){
                ans[top][i]=element;
                element++;
            }
            top++;
            for(int i=top ; i<=bottom; i++){
                ans[i][right]=element;
                element++;
            }
            right--;
            if(top <= bottom){
                for(int i=right ; i>=left; i--){
                    ans[bottom][i]=element;
                    element++;
                }
                bottom--;
            }
            if(left <= right){
                for(int i=bottom ; i>=top; i--){
                    ans[i][left]=element;
                    element++;
                }
                left++;
            }
        }
        vector<vector<int>> output;
        for (int i = 0; i < n; i++ ){
            vector<int> temp;
            for (int j = 0; j < n; j++ ){
                temp.push_back(ans[i][j]);
            }
            output.push_back(temp);
        }
        return output;
    }
};