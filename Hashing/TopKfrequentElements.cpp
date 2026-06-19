class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq ;
        vector<pair<int,int>> v ;
        vector<int> result ;
        for(auto n : nums){
            freq[n]++ ;
        }

        for(auto f : freq){
            v.push_back({f.second,f.first}) ;
        }

        sort(v.begin(),v.end()) ;

        if(k==v.size()){
            for(auto v : v){
                result.push_back(v.second) ;
            }
        }
        else{
            for(int i=v.size()-1; i>=v.size()-k; i--){
                result.push_back(v[i].second) ;
            }
        }
        return result ;
    }
};
