class Solution {
    int timeRequired (vector<int>& piles, int h,int limit ){
        long long time = 0;
        for (auto i : piles){
            if (i%h==0) time += i/h;
            else time += i/h + 1;
            if (time > limit ) break;
        }
        return time;
    }
    
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(),piles.end());
        while(low <= high){
            int mid = low + (high - low)/2;
            int time = timeRequired(piles,mid,h);
            if(time <= h) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};