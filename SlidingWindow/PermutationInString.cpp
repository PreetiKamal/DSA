class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        unordered_map<char, int> need ;
        unordered_map<char, int> window ;

        if(s1.size() > s2.size()){
            return false ;
        }

        for(int i=0; i<s1.size(); i++){
            need[s1[i]]++ ;
            window[s2[i]]++ ;
        }

        if(need==window){
            return true ;
        }

        for(int i=s1.size(); i<s2.size(); i++){
            window[s2[i]]++ ;
            window[s2[i-s1.size()]]-- ;

            if(window[s2[i-s1.size()]]==0){
                window.erase(s2[i-s1.size()]) ;
            }

            if(need==window){
                return true ;
            }
        }

        return false ;
    }
};
