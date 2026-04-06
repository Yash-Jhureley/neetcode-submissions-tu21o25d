class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        priority_queue<pair<int,int>> maxheap;
        for(auto [num,count]:mp){
            maxheap.push({count,num});
        }
        while(k>0 && !maxheap.empty()){
            ans.push_back(maxheap.top().second);
            maxheap.pop();
            k--;
        }
        return ans;
    }
};
