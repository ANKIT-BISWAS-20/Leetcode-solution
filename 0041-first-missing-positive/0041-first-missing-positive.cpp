class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        set <int> st;
        for (auto i : nums){
            st.insert(i);
        }
        long long i = 1;
        while (true){
            if (st.find(i) == st.end()) return i;
            i ++;
        }
    }
};