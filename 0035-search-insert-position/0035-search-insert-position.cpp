class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        long long low = 0;
        long long high = nums.size() - 1;
        long long ans = high + 1;
        while(low<=high){
            long long mid = low + ((high - low)/2);
            if (nums[mid]>=target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
};