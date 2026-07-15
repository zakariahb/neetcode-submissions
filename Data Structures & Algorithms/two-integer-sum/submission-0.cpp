class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int def = 0;
        vector<int> res(0);
        vector<int>::iterator it;
        for (int i = 0;i < nums.size(); i++)
        {
            def = target - nums[i];
            it = find(nums.begin() + i + 1, nums.end(), def);
            if (it != nums.end()){
                res.push_back(i);
                size_t pos = it - nums.begin();
                res.push_back(pos);

            }
        }
        return (res);

    }
};
