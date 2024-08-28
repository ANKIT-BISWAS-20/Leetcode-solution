#include<bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> mpp;
        for ( auto i : nums ){
            mpp.insert(i);
        }
        int maxlen = 0;
        for(auto i: mpp){
            if(mpp.find(i-1)==mpp.end()){
                int count = 1;
                int x = i;
                while(mpp.find(x+1)!=mpp.end()){
                    count++;
                    x++;
                }
                maxlen = max(count,maxlen);
            }
        }
        return maxlen;
        
    }
};