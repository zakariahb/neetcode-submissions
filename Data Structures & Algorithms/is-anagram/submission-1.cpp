#define RANGE 26
class Solution {
public:
 
    bool isAnagram(string s, string t) {
        std::vector<char> _S(s.begin(), s.end());
        std::vector<char> _T(t.begin(), t.end());
        std::sort(_S.begin(), _S.end());
        std::sort(_T.begin(), _T.end());
        // countSort(s);
        // countSort(t);
        if (_S == _T)
            return true;
        return false;
    }
};
