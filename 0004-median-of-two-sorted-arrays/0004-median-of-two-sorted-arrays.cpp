class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i = 0;
        int j = 0;
        vector<int> arr;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]) arr.push_back(nums1[i++]);
            else arr.push_back(nums2[j++]);
        }
        while (i<nums1.size()) arr.push_back(nums1[i++]);
        while (j<nums2.size()) arr.push_back(nums2[j++]);
        if(arr.size()%2==1) return arr[arr.size()/2];
        return ((double)arr[arr.size()/2]+(double)arr[(arr.size()/2)-1])/2;
    }
};