class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // int n=nums.size();
        // for(int i=0; i<n; i++){
        //     for(int j=i+1; j<n; j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }return {};

        //better approch


        int n= nums.size();
        unordered_map<int, int> prevMap;

        for(int i=0; i<n; i++){
            int diff = target - nums[i]; //check diff between target and current number
            if(prevMap.find(diff) != prevMap.end()){
                return {prevMap[diff], i};

            }
            prevMap.insert({nums[i], i});
        }
        return {};
    }
};
