class Solution {
    int numberOfPossible(vector<int>& bloomDay,int day,int m, int k){
        int cnt = 0 , boq = 0;
        for ( auto i : bloomDay ){
            if (i <= day) cnt ++;
            else {
                boq += cnt/k;
                cnt = 0;
            }
        }
        boq += cnt/k;
        return boq >= m;
    }
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int low = *min_element(bloomDay.begin(),bloomDay.end());
        int high = *max_element(bloomDay.begin(),bloomDay.end());
        long long value = m * 1LL * k * 1LL;
        if ( value > bloomDay.size() ) return -1;
        while(low<=high){
            int mid = low + (high - low)/2;
            if (numberOfPossible(bloomDay,mid,m,k)) high = mid - 1;
            else low = mid + 1;
        }
        return low;
    }
};