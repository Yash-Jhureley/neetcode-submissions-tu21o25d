class Solution {
    bool isSame(int arr1[],int arr2[]){
        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i])return false;
        }
        return true;
    }
public:
    bool checkInclusion(string s1, string s2) {
        int freq[26]={0};
        int n=s1.length();
        int n2=s2.length();
        for(int i=0;i<n;i++){
            freq[s1[i]-'a']++;
        }
        int windsize=n;
        for(int i=0;i<n2;i++){
            int windidx=0,idx=i;
            int windowfreq[26]={0};
            while(windidx<windsize && idx<n2){
                windowfreq[s2[idx]-'a']++;
                windidx++;idx++;
            }
            if(isSame(freq,windowfreq)){
                return true;
            }        
        }
        return false;

    }
};
