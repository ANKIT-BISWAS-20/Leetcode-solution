class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0;
        int j = 1;
        int size = nums.size();
        vector <int> output(size);
        for(auto it:nums){
            if(it>=0){
                output[i]=it;
                i+=2;
            }else{
                output[j]=it;
                j+=2;
            }
        }
        return output;
    }
};