class Solution {
public:
    bool isPalindrome(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(j>i){
            while(!isalnum(s[i])&&j>i){
                i++;
            }
            while(!isalnum(s[j])&&j>i){
                j--;
            }
            if(tolower(s[i])!=tolower(s[j])){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};
