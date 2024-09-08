class Solution {
public:
    bool isPerfectSquare(int num) {
        long long root = sqrt(num);
        if (root * root == num) return true;
        return false;
    }
};