class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int,int> freq;
        for(int i=0;i<nums.size();i++){
            freq[nums[i]]++;
        }
        int i=0;
        for(auto itr:freq){
            nums[i++]=itr.first;
        }
        return i;
        
    }
};