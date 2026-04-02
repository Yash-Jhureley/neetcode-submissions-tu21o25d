class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        int str_n=strs[n].length();
        string first_string=strs[0];
        string last_string=strs[n-1];
        string ans="";
        for(int i=0;i<first_string.length();i++){
            if(first_string[i]==last_string[i]){
                ans+=first_string[i];
            }
            else{
                break;
            }
        }
        return ans;
    }
};