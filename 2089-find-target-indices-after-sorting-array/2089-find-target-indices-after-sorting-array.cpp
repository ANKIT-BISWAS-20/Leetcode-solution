class Solution {
    int lowerBound (vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = high + 1;
        while(low<=high){
            int mid = low + ((high - low)/2);
            if (nums[mid]>=target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
    int upperBound (vector<int>& nums, int target){
        int low = 0;
        int high = nums.size()-1;
        int ans = high + 1;
        while(low<=high){
            int mid = low + ((high - low)/2);
            if (nums[mid]>target){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return ans;
    }
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int starting = lowerBound(nums,target);
        if (starting == nums.size() || nums[starting]!=target) return {};
        int ending = upperBound(nums,target);
        if (starting == ending-1) return{starting};
        vector <int> ans;
        for (int i=starting;i<ending;i++){
            ans.push_back(i);
        }
        return ans;
    }
};