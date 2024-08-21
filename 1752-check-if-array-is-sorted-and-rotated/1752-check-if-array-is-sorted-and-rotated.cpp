class Solution {
public:
    bool check(vector<int>& nums) {
        int countDecrease = 0;
        if(nums[0]<nums[nums.size()-1]){
            countDecrease ++;
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                countDecrease ++;
            }
            if(countDecrease > 1){
                return false;
            }
        }
        return true;
    }
};