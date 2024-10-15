class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = n*m - 1;
        while(low<=high){
            int mid = low + (high - low)/2;
            int current_row = mid/m;
            int current_col = mid%m;
            int current_value = matrix[current_row][current_col];
            if(current_value == target) return true;
            else if(current_value > target) high = mid - 1;
            else low = mid + 1;
        }
        return false;
    }
};