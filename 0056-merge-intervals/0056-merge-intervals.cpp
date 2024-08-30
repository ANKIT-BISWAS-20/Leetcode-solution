class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> output;
        for (auto i:intervals){
            if(output.empty()||i[0]>output.back()[1]){
                output.push_back(i);
            }else{
                output.back()[1] = max(output.back()[1],i[1]);
            }
        }
        return output;
    }
};