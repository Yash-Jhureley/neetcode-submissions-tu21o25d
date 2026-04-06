class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0=0;
        int count1=0;
        int count2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                count0++;
            }
            else if(nums[i]==1){
                count1++;
            }
            else{
                count2++;
            }
        }
        int index=0;
        //     for(int i=0;i<count0;i++){
        //         nums[index++]=0;
        //     }
        //     for(int i=0;i<count1;i++){
        //         nums[index++]=1;
        //     }
        //     for(int i=0;i<count2;i++){
        //         nums[index++]=2;
        //     }
        // }
        for(int i=0;i<n;i++){
            if(index<count0){
                nums[index++]=0;
            }
            else if(index<(count0+count1)){
                nums[index++]=1;
            }
            else if(index<(count0+count1+count2)){
                nums[index++]=2;
            }
        }
    }
};