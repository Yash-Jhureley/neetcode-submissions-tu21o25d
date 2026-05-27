class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>prefix(n);
        vector<int>suffix(n);
        int total=0;
        prefix[0]=height[0];
        for(int i=1;i<n-1;i++){
            prefix[i]=max(prefix[i-1],height[i]);
        }
        suffix[n-1]=height[n-1];
        for(int i=n-2;i>=0;i--){
            suffix[i]=max(suffix[i+1],height[i]);
        }
        for(int i=0;i<n;i++){
            int leftm=prefix[i],rightm=suffix[i];
            if(height[i]<leftm && height[i]<rightm){
                total+=min(leftm,rightm)-height[i];
            }
        }
        return total;
    }
};
