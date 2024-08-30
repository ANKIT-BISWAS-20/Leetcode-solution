class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        long long totalSum = 0;
        for(auto i:nums){
            totalSum += i;
        }
        long long sum = 0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            if((sum - nums[i])*2 == (totalSum - nums[i]) ){
                return i;
            }
        }
        return -1;
    }
};