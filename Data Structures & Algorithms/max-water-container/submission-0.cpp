class Solution {
public:
    int maxArea(vector<int>& h) {
       // w = l - r , h = min (h[l] , min[r]) ; ans = w * h
       int l = 0 , r = h.size() - 1;
       int maxWater = 0;
       while (l < r) {
            maxWater = max(maxWater , (min(h[l] , h[r])) *(r - l));
            if (h[l] < h[r]) {
                l++;
            } else {
                r--;
            }
       } 
       return maxWater;
    }
};
