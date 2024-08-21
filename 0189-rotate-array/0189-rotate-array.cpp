class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int size = nums.size();
        int remLength = size - (k % size);
        reverse(nums.begin(),nums.begin()+remLength);
        reverse(nums.begin()+remLength,nums.begin()+size);
        reverse(nums.begin(),nums.begin()+size);
    }
};