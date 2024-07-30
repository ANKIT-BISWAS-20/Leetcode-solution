class Solution {
public:
    bool isPalindrome(string s) {
        vector <char> str;
        for ( auto j : s ){
            if (isalnum(j)){
                str.push_back(j);
            }
        }
        int i = 0;
        int j = str.size() - 1;
        while (i<j){
            if (tolower(str[i])!=tolower(str[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};