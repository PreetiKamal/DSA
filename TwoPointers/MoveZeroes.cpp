class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size() ;
        int fast=0, slow=0 ;
        for(fast=0; fast<n; fast++){
            if(nums[fast]!=0){
                swap(nums[fast], nums[slow]) ;
                slow++ ;
            }
            if(fast==0){
                continue ;
            }
        }
    }
};
