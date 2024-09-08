class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        vector <int> ans;
        map <int,int> mpp;
        for ( auto i : nums ){
            mpp[i]++;
            if (mpp[i] > 1) ans.push_back(i);
        }
        return ans;
    }
};