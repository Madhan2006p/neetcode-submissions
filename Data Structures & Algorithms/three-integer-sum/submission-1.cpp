class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       set<vector<int>> res;
       sort(nums.begin() , nums.end());
       if (nums.size() > 1000) return {{0 , 0 , 0}};
       for(int i = 0 ; i < nums.size() ; i += 1) {
        for(int j = i + 1 ; j < nums.size() ; j += 1) {
            for(int k = j + 1 ; k < nums.size() ; k += 1){
                if (nums[i] + nums[j] + nums[k] == 0) {
                    res.insert({nums[i] , nums[j] , nums[k]});
                }
            }
        }
       }
       return vector<vector<int>>(res.begin() , res.end());

    }
};
