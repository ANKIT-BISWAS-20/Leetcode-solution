class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long long pref = 1;
        long long suff = 1;
        long long maxi = INT_MIN;
        for(int i=0;i<nums.size();i++){
            if (pref==0) pref=1;
            if (suff==0) suff=1;
            pref *= (long long) nums[i];
            suff *= (long long) nums[nums.size()-1-i];
            maxi = max(maxi , max(pref,suff));
        }
        return (int) maxi;
    }
};