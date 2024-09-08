class Solution {
public:
    int mySqrt(int x) {
       long long int low = 1;
       long long int high = x;
       long long int ans = 0;
       while(low <= high){
           long long int mid = low + (high - low)/2;
           long long int midSquare = mid * mid;
           if (midSquare == x) return mid;
           else if (midSquare < x){
               ans = mid;
               low = mid + 1;
           }
           else high = mid - 1;
       }
       return ans;
    }
};