class Solution {
public:
    string convertToTitle(int columnNumber) {
        string output = "";
        while (columnNumber > 0) {
            columnNumber--;
            int remainder = columnNumber % 26;
            output = (char)(remainder + 'A') + output;
            columnNumber /= 26;
        }
        return output;
    }
};