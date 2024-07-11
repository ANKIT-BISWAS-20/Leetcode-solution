class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        int i = 0;
        int size = flowerbed.size();
        
        while (i < size) {
            if (flowerbed[i] == 0 && 
                (i == 0 || flowerbed[i - 1] == 0) && 
                (i == size - 1 || flowerbed[i + 1] == 0)) {
                flowerbed[i] = 1;
                count++;
                i += 2; // Skip the next plot as we cannot plant there
            } else {
                i++;
            }
        }
        
        return count >= n;
    }
};