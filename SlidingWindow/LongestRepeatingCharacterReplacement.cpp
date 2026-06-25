class Solution {
public:
    int characterReplacement(string s, int k) {
        int n = s.size() ;
        unordered_map<char,int> freq ;
        int max_freq = INT_MIN ;
        int l=0 ;
        int curr_win_len ;
        int ans = INT_MIN ;

        for(int r=0; r<n; r++){
            freq[s[r]] ++ ;
            max_freq = max(freq[s[r]], max_freq) ;
            curr_win_len = r-l+1 ;

            if(curr_win_len-max_freq > k){
                freq[s[l]] -- ;
                l++ ;
                curr_win_len = r-l+1 ;
            }

            ans = max(ans, curr_win_len) ;
        }
        
        return ans ;
    }
};
