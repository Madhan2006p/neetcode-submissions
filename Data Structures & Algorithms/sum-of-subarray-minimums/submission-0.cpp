class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int sum = 0;
        const int MOD = 1000000007;
        for (int i = 0 ; i < arr.size() ; i += 1) {
            int minVal = arr[i];
            for( int j = i ; j < arr.size() ; j += 1) {
                minVal = min(minVal , arr[j]);
                sum = (sum + minVal) % MOD;
            }
        }
        return sum;
    }
};
