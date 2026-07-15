class Solution {
public:

    string encode(vector<string>& strs) {
       std::string res;
       for (auto val : strs){
        res.append("#");
        res.append(to_string(val.size()));
        res.append("#");
        res.append(val);
       }
       cout << "res : " << res << endl;
       return res;


    }

    vector<string> decode(string str) {
        vector<string> res;
        stringstream ss(str);
        string val;
        string save;
        for(string::iterator it = str.begin(); it < str.end(); it++){
            if (*it == '#'){
                it++;
                while(isdigit(*it)){
                    save.push_back(*it);
                    it++;
                }
                it++;
                cout << "save : " << save << endl;
                cout << "*it : '" << *it << "'" << endl;
                int num = atoi(save.c_str());
                cout << "num : " << num << endl;
                size_t pos = it - str.begin();
                res.push_back(str.substr(pos, num));
                save.clear();
                it = it + num - 1;
                cout << "after : " << *it << endl;

            }
        }

        return res;
    }
};
