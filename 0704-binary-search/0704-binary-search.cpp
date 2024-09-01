class Solution {
    // int binarySearch(vector<int>& nums, int low, int high, int target){
    //     if (low > high) return -1;
    //     int mid = (low + high)/2;
    //     if (nums[mid] == target) return mid;
    //     else if (nums[mid] > target) return binarySearch(nums,low,mid-1,target);
    //     return binarySearch(nums,mid+1,high,target);
    // }
public:
    int search(vector<int>& nums, int target) {
        // return binarySearch(nums,0,nums.size(),target);
        int low = 0;
        int high = nums.size()-1;
        while(low<=high){
            int mid = (low+high)/2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};