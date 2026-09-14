class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int> unorderedSet(nums.begin(), nums.end());
        if(unorderedSet.size() < nums.size()) return true;
        return false;
    }
};