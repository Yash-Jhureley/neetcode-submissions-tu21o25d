class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int itr:nums){
            mp[itr]++;
        }
        for(auto itr:mp){
            if(itr.second >=2){
                return true;
            }
        }
        return false;
        
    }
};