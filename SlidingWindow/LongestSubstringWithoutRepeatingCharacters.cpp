class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size() ;
        int l=0, r=0 ;
        unordered_map<char, int> freq ;
        int curr_win_len ;
        int ans = INT_MIN ;

        if(s.size()==0){
            return 0 ;
        }

        for(r=0; r<n; r++){
            freq[s[r]]++ ;
            curr_win_len = r-l+1 ;
            while(freq[s[r]] > 1){
                freq[s[l]]-- ;
                l++ ;
                curr_win_len = r-l+1 ;
            }
            ans = max(curr_win_len, ans) ;
        }
        return ans ;
    }
};
