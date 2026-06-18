class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int def = 0;
        vector<int> res;

        
        for (int i = 0; i < nums.size(); i++)
        {
          def = target - nums[i];
          std::vector<int>::iterator pos = find(nums.begin() + i + 1, nums.end(), def);
          if (pos != nums.end())
          {
            res.push_back(i);
            int index = pos - nums.begin();
            res.push_back(index);
            return res;
          }
        }
        return res;
    }
};
