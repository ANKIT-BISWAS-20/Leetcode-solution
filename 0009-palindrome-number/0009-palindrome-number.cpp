class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        if (x == 0) 
            return true;
        int s = x;
        long currentDigit = 0;
        long rev = 0;
        while(s>0){
            currentDigit = s % 10;
            rev = rev*10 + currentDigit;
            s = s/10;
        }
        
        if (rev==x) return true;
        return false;
    }
};