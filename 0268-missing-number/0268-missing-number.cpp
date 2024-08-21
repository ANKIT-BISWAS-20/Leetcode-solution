class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int result_real = 0;
        int result_now = 0;
        int i = 0;
        while(i< nums.size()){
            result_now = result_now ^ nums[i];
            result_real = result_real ^ i;
            i++;
        }
        result_real =result_real ^ (i);
        return result_real^result_now;
    }
    
};