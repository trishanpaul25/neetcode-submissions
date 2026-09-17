class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         // 1. Count frequencies using a map: {number -> frequency}
        std::map<int, int> counts;
        for (int num : nums) {
            counts[num]++; // Increment the frequency value for this key
        }

        // 2. Use a Max-Heap (priority queue) to automatically sort by frequency.
        // It stores pairs as: {frequency, number}
        std::priority_queue<std::pair<int, int>> maxHeap;
        for (auto const& [num, freq] : counts) {
            maxHeap.push({freq, num});
        }

        // 3. Pop the top K most frequent elements out of the max-heap
        std::vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(maxHeap.top().second); // Get the number
            maxHeap.pop();                       // Remove the highest frequency item
        }

        return ans;
    }
};
