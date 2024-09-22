class Solution {
    int daysCount (vector<int>& weights, int mid){
        long long days = 1;
        long long capacity = 0;
        for (auto i : weights){
            if (capacity + i > mid){
                days++;
                capacity = i;
            }else{
                capacity += i;
            }
        }
        return (int) days;
    }
public:
    int shipWithinDays(vector<int>& weights, int days) {
        long long low = *max_element(weights.begin(),weights.end());
        long long high = accumulate(weights.begin(),weights.end(),0);
        while(low <= high){
            long long mid = low + (high - low)/2;
            if(daysCount(weights,mid)<=days) high = mid - 1;
            else low = mid + 1;
        }
        return (int) low;
    }
};