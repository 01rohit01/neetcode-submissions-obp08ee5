class Solution {
public:
    int findMin(vector<int> &nums) {
        //optimal approch
        int left=0; int right=nums.size()-1;
        while(left<right){
            int mid= left+(right-left)/2;
            if (nums[mid] > nums[right]) {
            left = mid + 1;
        } else {
            right = mid;
        }
        }
        return nums[left];
    //     int mini=nums[0];
    //     for(int num:nums){
    //         mini=min(mini,num);
    //     }
    //     return mini;
        
    }
};
