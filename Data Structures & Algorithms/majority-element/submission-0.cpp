class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0;
        int maxCount=0;
        int countVariable=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            count++;
            if(i == n - 1 || nums[i]!=nums[i+1]){
                if(count>maxCount){
                    maxCount=count;
                    countVariable=nums[i];
                }
                count=0;
            }

        }
        return countVariable;
    }
};