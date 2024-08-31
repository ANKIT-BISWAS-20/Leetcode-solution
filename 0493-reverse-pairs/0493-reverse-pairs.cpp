class Solution {
    void merge(vector<int>& arr, long long low, long long mid, long long high) {
    vector<long long> temp; 
    long long left = low;      
    long long right = mid + 1;
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }
  }
  void countPairs(vector<int>& arr, long long low, long long mid, long long high, long long &count) {
      int right = mid +1;
      for(int left=low;left<=mid;left++){
          while(right<=high && arr[left]>2*(long long)arr[right]) right++;
          count += right - (mid + 1);
      }
  }
  void mergeSort(vector<int>& arr,long long low,long long high,long long &count){
    if (low >= high) return;
    long long mid = (low + high) / 2 ;
    mergeSort(arr, low, mid, count);
    mergeSort(arr, mid + 1, high, count);
    countPairs(arr, low, mid, high , count);
    merge(arr, low, mid, high);
  } 
public:
    int reversePairs(vector<int>& nums) {
        long long n = nums.size();
        long long low = 0;
        long long high = n-1;
        long long count = 0;
        mergeSort(nums,low,high,count);
        return (int) count;
    }
};