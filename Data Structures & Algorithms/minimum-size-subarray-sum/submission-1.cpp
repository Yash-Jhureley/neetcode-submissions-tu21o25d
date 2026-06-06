class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int minlen=INT_MAX;
        int currentsum=0;
        int low=0,high=0;
        while(high<nums.size()){
            currentsum+=nums[high];
            high++;

            while(currentsum>=target){
                int len=high-low;

                minlen=min(len,minlen);
                currentsum-=nums[low];
                low++;
            }
        }
        return minlen==INT_MAX?0:minlen;
    }
};