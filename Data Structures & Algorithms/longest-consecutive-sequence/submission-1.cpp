class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         
        unordered_set<int> num_set(nums.begin(), nums.end());
        int longest = 0;

        for (int num : num_set) {
            // Start only if it is the first number of sequence
            if (num_set.find(num - 1) == num_set.end()) {
                int current = num;
                int length = 1;

                while (num_set.find(current + 1) != num_set.end()) {
                    current++;
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
    
};
