class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size() ;
        int r,l=0 ;
        int sum = 0 ;
        int curr_win_len ;
        int ans = INT_MAX ;
        
        for(r=0; r<n; r++){
            sum+=nums[r] ;
            curr_win_len = r-l+1 ;
            while(sum>=target){
                curr_win_len = r-l+1 ;
                ans = min(curr_win_len,ans) ;
                sum-=nums[l] ;
                l++ ;
            }
        }
        if(ans==INT_MAX){
            return 0 ;
        }
        return ans ;
    }
};
