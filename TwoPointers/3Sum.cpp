class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result ;
        int i = 0 ;
        int l, r ;
        int n = nums.size() ;

        sort(nums.begin(), nums.end()) ;

        while(i < n-2){
            l = i+1 ;
            r = n-1 ;

            while(l<r){
                if(nums[i]+nums[l]+nums[r] < 0){
                    l++ ;
                }
                else if(nums[i]+nums[l]+nums[r] > 0){
                    r-- ;
                }
                else{
                    result.push_back({nums[i],nums[l],nums[r]}) ;
                    l++ ;
                    r-- ;
                    while(l<r && nums[l]==nums[l-1]){
                        l++ ;
                    }
                    
                    while(l<r && nums[r]==nums[r+1]){
                        r-- ;
                    }
                    
                }
            }

            i++ ;
            
            while(i<n-1 && nums[i]==nums[i-1]){
                i++ ;
            }
        }

        return result ;
    }
};
