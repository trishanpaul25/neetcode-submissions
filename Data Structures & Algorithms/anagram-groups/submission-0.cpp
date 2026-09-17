class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string, vector<string>> hash;
        vector<vector<string>> ans;
        for(string s : strs){
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());

            hash[sorted_s].push_back(s);
        }

        for(auto pair : hash){
            ans.push_back(pair.second);
        }

        return ans;
    }
};
