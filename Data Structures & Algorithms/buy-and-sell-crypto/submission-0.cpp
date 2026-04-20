class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximumprofit=0;
        int n=prices.size();
        int mini=prices[0];
        for(int i=1;i<n;i++){
            int maxi=max(prices[i]-mini,maximumprofit);
            if(maxi>maximumprofit){
                maximumprofit=maxi;

            }
            if(mini>prices[i]){
                mini=prices[i];
            }
        }
        return maximumprofit;
        
    }
};
