#include <iostream>
#include <unordered_map>
#include<vector>
using namespace std ;

int main()
{
    vector<int> arr = {1,2,2,3,3,1,3,2,4} ;
    unordered_map<int,int> freq ;
    
    for(int x : arr){
        freq[x]++ ;
    }
    
    for(auto f : freq){
        cout << f.first << "->" << f.second << endl ;
    }

    return 0;
}
