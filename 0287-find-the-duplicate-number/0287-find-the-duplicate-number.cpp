class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map <int,int> mpp;
        for (auto i : nums){
            mpp[i]++;
            if(mpp[i]>1) return i;
        }
        return -1;
    }
};