class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> mpp;
        int condition = nums.size()/2;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto it:mpp){
            if(it.second>condition){
                return it.first;
            }
        }
        return -1;
    }
};