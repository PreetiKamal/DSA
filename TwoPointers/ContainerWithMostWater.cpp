class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0, r=height.size()-1 ;
        int max_area = INT_MIN, area ;
        int w,h ;
        while(l<r){
            w = r-l ;
            h = min(height[r], height[l]) ;
            area = h*w ;
            max_area = max(max_area, area) ;
            if(height[l]<height[r]){
                l++ ;
            }else if(height[l]> height[r]){
                r-- ;
            }else{
                r-- ;
                l++ ;
            }
        }
        return max_area ;
    }
};
