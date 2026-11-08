class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int> pos_vec;
       vector<int> neg_vec;

       for(int i = 0 ; i < nums.size() ; i += 1) {
            if (nums[i] > 0) {
                pos_vec.push_back(nums[i]);
            } else {
                neg_vec.push_back(nums[i]);
            }
       } 

       vector<int> res;
       int j = 0;
       for(int i = 0 ; i < nums.size() / 2 ; i += 1) {
            res.push_back(pos_vec[i]);
            res.push_back(neg_vec[i]);
       }
       return res;
    }
};