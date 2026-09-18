class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seq(nums.begin(), nums.end());
        if(nums.empty()) return 0;
        int count=0;
        for(int num : seq){
            if(seq.find(num-1) == seq.end()){
                int curr_num = num;
                int curr_count = 1;

                while(seq.find(curr_num + 1) != seq.end()){
                    curr_num = curr_num + 1;
                    curr_count++;
                }

                count = max(curr_count, count);
            }
        }
        return count;
    }
};
