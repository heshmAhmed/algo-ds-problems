class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(int i = 0; i < strs.size();i++) {
            string str = strs[i];
            sort(str.begin(), str.end());
            mp[str].push_back(strs[i]);
        }

        vector<vector<string>> ans;
        for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
            ans.push_back(itr->second);
        }

        return ans;
    }
};

/*
    [[1, 1, 1] ]
*/