class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> s(nums.begin(), nums.end());
        if (nums.size() == s.size())
           return false;
        return true;
    }
};