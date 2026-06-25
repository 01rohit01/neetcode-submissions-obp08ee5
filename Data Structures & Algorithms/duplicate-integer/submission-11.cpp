class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> ans;
        for(int num:nums){
            ans.insert(num);
        }
        return ans.size()<nums.size();
//    unordered_set<int> ans;
//    for(int num:nums){
//     ans.insert(num);
//    }
//    return ans.size()<nums.size();

         
    }
};