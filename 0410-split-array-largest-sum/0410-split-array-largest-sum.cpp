class Solution {
public:
    int countTime(vector<int>& nums, int mid){
        int count = 1;
        int time = 0;
        for(auto i : nums){
            if (time + i <= mid) time += i;
            else{
                time = i;
                count ++;
            }
        }
        return count;
    }
    
    int splitArray(vector<int>& nums, int k) {
        long long low = *max_element(nums.begin(),nums.end());
        long long high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            long long mid = low + (high - low)/2;
            long long value = countTime(nums,mid);
            if (value <= k) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};