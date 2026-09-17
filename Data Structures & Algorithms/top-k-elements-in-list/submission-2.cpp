class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> count;
        vector<vector<int>> freq(n+1);

        for(int num : nums){
            count[num]++;
        }

        for(auto pair : count){
            freq[pair.second].push_back(pair.first);
        }

        vector<int> res;
        for(int i = freq.size()-1; i > 0; i--){
            for(int num : freq[i]){
                res.push_back(num);
                if(res.size() == k){
                    return res;
                }
            }
        }

        return res;
    }
};
