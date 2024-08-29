class Solution {
    vector<int> generateRow(int row){
        long long element = 1;
        vector <int> currentRow;
        currentRow.push_back(1);
        for (int col=1;col<row;col++){
            element *= (row - col);
            element /= col;
            currentRow.push_back(element);
        }
        return currentRow;
    }
public:
    vector<vector<int>> generate(int numRows) {
        vector <vector<int>> output;
        for(int row = 1; row <= numRows; row ++){
            output.push_back(generateRow(row));
        }
        return output;
    }
};