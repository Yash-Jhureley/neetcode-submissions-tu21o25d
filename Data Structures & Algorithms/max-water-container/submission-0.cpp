class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n= heights.size();
        int mw=0;
        for (int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int wd=j-i;
                int ht=min(heights[i],heights[j]);
                int area=ht*wd;
                mw=max(mw,area);
            }
        }
        return mw;
    }
};
