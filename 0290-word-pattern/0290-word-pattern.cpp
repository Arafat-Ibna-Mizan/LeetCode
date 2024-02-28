class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        string temp = "";
        int i = 0;
        while (i < s.size()) {
            if (s[i] == ' ') {
                words.push_back(temp);
                temp = "";
            } else {
                temp += s[i];
            }
            i++;
        }
        words.push_back(temp);

        if (words.size() != pattern.size()) {
            return false;
        }

        unordered_map<char, string> target;
        set<string> st;

        for (int i = 0; i < pattern.size(); i++) {
            if (target.find(pattern[i]) != target.end()) {
                if (target[pattern[i]] != words[i]) {
                    return false;
                }
            } else {
                if (st.count(words[i]) > 0) {
                    return false;
                }
                target[pattern[i]] = words[i];
                st.insert(words[i]);
            }
        }
        return true;
    }
};
