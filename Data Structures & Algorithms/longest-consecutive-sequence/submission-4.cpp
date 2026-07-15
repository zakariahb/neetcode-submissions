class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty())
            return (0); 
        set<int> s(nums.begin(), nums.end());
        int len = 1;
        int save = 0;
        for (auto val : s)
            cout << val << " " ;
        set<int>::iterator second = s.begin();
        set<int>::iterator first = next(second);
        for(; first != s.end() ; first++)
        {
            if (*first == (*second) + 1)
                len++;
            else
            {
                if (len > save)
                    save = len;
                len = 1;
            }
            second++;
        }
        if (len > save)
            return len;
        return (save);
    }
};
