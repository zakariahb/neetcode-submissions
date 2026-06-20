class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<string>> groups;

        for (auto& word : strs) {
            vector<int> freq(26, 0);

            for (char c : word) {
                freq[c - 'a']++;
            }
            groups[freq].push_back(word);
        }
        
        vector<vector<string>> res;

        for (auto& [key, group] : groups) {
            res.push_back(group);
        }

        return res;
    }
};