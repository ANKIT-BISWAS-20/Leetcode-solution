class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map <int,int> mpp;
        vector <int> ans;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                return {i,mpp[target-nums[i]]};
            }else{
                mpp[nums[i]]=i;
            }
        }
        return {-1,-1};
    }
};