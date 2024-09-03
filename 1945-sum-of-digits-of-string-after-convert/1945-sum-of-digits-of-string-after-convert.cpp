class Solution {
public:
    int getLucky(string s, int k) {
        long long value = 0;
        vector <int> digits;
        for (auto i:s){
            int temp = (int) i - (int) 'a' + 1;
            if (temp>9){
                digits.push_back(temp/10);
                digits.push_back(temp%10);
            }else{
                digits.push_back(temp);
            }
        }
        for (int i=1;i<k;i++){
            long long sum = 0;
            for (auto i:digits) sum += i;
            vector <int> tempVector;
            while(sum > 0){
                tempVector.push_back(sum%10);
                sum /= 10;
            }
            digits = {tempVector.begin(),tempVector.end()};
        }
        int ans = 0;
        for (auto it : digits){
            ans += it;
        }
        return ans;
    }
};