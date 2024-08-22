class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int element = -1;
        int count = 0;
        for(auto i:nums){
            if(count==0){
                count = 1;
                element = i;
            }else if(i == element){
                count++;
            }else{
                count--;
            }
        }
        int counter = 0;
        for(auto it:nums){
            if(it == element)
                counter ++;
        }
        if(counter > (nums.size()/2))
            return element;
        else
            return -1;
    }
};