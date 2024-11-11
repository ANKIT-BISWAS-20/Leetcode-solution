class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend == divisor) return 1;
        bool sign = true;
        if(dividend>=0 && divisor<0) sign=false;
        else if(dividend<=0 && divisor>0) sign=false;
        long dividend_used = abs(dividend);
        long divisor_used = abs(divisor);
        long ans = 0;
        while(dividend_used>=divisor_used){
            int count = 0;
            while(dividend_used >= (divisor_used<<(count+1))){
                count++;
            }
            dividend_used -= divisor_used<<(count);
            ans += 1<<(count);
        }
        if(ans == (1<<31) && sign) ans = INT_MAX;
        if(ans == (1<<31) && !sign) ans = INT_MIN;  
        return (sign) ? ans : (-1 * ans);
    }
};