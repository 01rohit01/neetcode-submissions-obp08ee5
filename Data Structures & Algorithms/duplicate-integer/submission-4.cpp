class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     if(nums[i]==nums[i-1]){
        //         return true;
        //     }
        // }
        // return false;

        //optimal approch
        unordered_set<int> set;
        for(int i=0; i<nums.size(); i++){
            set.insert(nums[i]);
        }
        return set.size()<nums.size();

         
    }
};