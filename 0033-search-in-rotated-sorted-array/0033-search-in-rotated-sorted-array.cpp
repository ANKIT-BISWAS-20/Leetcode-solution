class Solution {
public:
    int search(vector<int>& nums, int target) {
        long long low = 0;
        long long high = nums.size() - 1;
        while(low <= high){
            long long mid = low + (high - low)/2;
            if (nums[mid] == target) return mid;
            if (nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid]) high = mid - 1;
                else low = mid + 1;
            }else{
                if(nums[mid] <= target && target <= nums[high]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};