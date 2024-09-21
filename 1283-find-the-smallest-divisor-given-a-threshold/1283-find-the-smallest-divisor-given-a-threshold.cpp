class Solution {
    int divisorSum(vector<int>& nums, int mid){
        long long sum = 0;
        for (auto i : nums){
            if (i % mid == 0) sum += (i/mid);
            else sum += (i/mid) + 1;
        }
        return (int) sum;
    }
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        long long low = 1;
        long long high = *max_element(nums.begin(),nums.end());
        while(low <= high){
            long long mid = low + (high - low)/2;
            if (divisorSum(nums,mid)<=threshold) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};