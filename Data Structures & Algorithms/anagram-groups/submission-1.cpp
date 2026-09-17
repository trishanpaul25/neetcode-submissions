class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hash;
        vector<vector<string>> ans;
        for(string s : strs){
            string count(26,0);

            for(char c : s){
                count[c - 'a'] += 1;
            }

            hash[count].push_back(s);
        }

        for(auto pair : hash){
            ans.push_back(pair.second);
        }

        return ans;
    }
};
