class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.size() ;
        int vowels = 0 ;
        int max_v = INT_MIN ;

        for(int i=0; i<k; i++){
            if(isVowel(s[i])){
                vowels++ ;
            }
        }

        max_v = max(max_v, vowels) ;

        for(int i=k; i<n; i++){
            if(isVowel(s[i])){
                vowels++ ;
            }

            if(isVowel(s[i-k])){
                vowels-- ;
            }

            max_v = max(max_v, vowels) ;
        }

        return max_v ;
    }

    bool isVowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return true ;
        }
        return false ;
    }
};
