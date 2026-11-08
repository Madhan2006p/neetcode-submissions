class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin() , skill.end());
        // if (skill.size() > 10000) return 50000000000;
        int target = skill[0] + skill[skill.size() - 1];

        int l = 0 , r = skill.size() - 1;
        long long prod = 0;
        while (l < r) {
            if (skill[l] + skill[r] != target) return -1;
            if (skill[l] + skill[r] == target) {
                prod += (long long)skill[l] * skill[r] ;
            }
            l += 1;
            r -= 1;
        } 
        return prod;
    }
};
