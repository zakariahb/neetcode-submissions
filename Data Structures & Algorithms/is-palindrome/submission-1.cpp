class Solution {
public:
    bool isPalindrome(string s) {
        string save;
        for (int i = 0; i < s.size(); i++)
            if (isalnum(s[i]))
                save.push_back(tolower(s[i]));
        cout << save << endl;
        for(int i = 0;i < save.size(); i++)
        {
            if (save[i] != save[save.size() - i - 1])
                return false;

        }
        return true;

    }
};
