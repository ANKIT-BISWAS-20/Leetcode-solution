class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map <int, int> prefixSum;
        prefixSum[0] = 1;
        int size = nums.size();
        int count = 0;
        long long sum = 0;
        for(int i = 0; i < size; i++){
            sum += nums[i];
            long long rem = sum - k;
            count += prefixSum[rem];
            prefixSum[sum]++;
        }
        return count;
    }
};