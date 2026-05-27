class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n=heights.size();
        int mw=0;
        int l=0,r=n-1;
        while(l<r){
            int wd=r-l;
            int ht=min(heights[l],heights[r]);
            int area=wd*ht;
            mw=max(area,mw);
            if(heights[l]<heights[r]){
                l++;
            }
            else{
                r--;
            }
        }
        return mw;
    }
};
