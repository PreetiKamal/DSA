class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st ;
        int curr, len, longest = INT_MIN ;

        if(nums.size() == 0){
            return 0 ;
        }
        
        for(auto x : nums){
            st.insert(x) ;
        }

        for(auto s : st){
            if(st.find(s-1) == st.end()){
                curr = s ;
                len = 1 ;
                while(st.find(curr+1) != st.end()){
                    curr++ ;
                    len ++ ;
                }
                longest = max(longest, len) ;
            }
        }

        return longest ;
    }
};
