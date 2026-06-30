class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size() ;
        int l = 0, r ;
        double sum = 0, avg = 0, max_sum = INT_MIN ;
        for(r=0; r<k; r++){
            sum+=nums[r] ;
        }
        max_sum = sum ;
        for(r=k ; r<n; r++){
            sum = sum+nums[r]-nums[l] ;
            l++ ;
            max_sum = max(max_sum, sum) ;
        }
        avg = max_sum/(double)k ;
        return avg ;
    }
};
