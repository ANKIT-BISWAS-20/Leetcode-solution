class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long element = 1;
        vector <int> output;
        output.push_back(1);
        for(int col=1;col<rowIndex+1;col++){
            element *= (rowIndex+1-col);
            element /= col;
            output.push_back(element);
        }
        return output;
    }
};