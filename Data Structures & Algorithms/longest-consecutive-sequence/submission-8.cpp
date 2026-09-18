class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        vector<int> copy = nums;
        sort(copy.begin(),copy.end());

        int count = 1;
        int curr_count = 1;

        for(int i = 0; i < nums.size()-1; i++){
            if(copy[i+1] == copy[i]){
                continue;
            }
            if(copy[i+1] == copy[i] + 1){
                curr_count++;
            }
            else{
                count = max(curr_count, count);
                curr_count = 1;
            }
        }
        return max(curr_count, count);
    }
};
