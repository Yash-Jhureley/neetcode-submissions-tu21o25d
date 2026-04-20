class Solution {
    stack<char> st;
    bool valid(char c){
        if(st.empty()){
            return false;
        }
        if(c==')'&& st.top()=='(' )
        {
            st.pop();
            return true;
        }
        if(c==']'&& st.top()=='[' )
        {
            st.pop();
            return true;
        }
        if(c=='}'&& st.top()=='{' ){
            st.pop();
            return true;
        }
        return false;
        
    }
public:
    bool isValid(string s) {
        int n=s.length();
        for(int i=0;i<n;i++){
            if(s[i]=='('||s[i]=='{' || s[i]=='['){
                st.push(s[i]);
            }
            if(s[i]==')'|| s[i]=='}' || s[i]==']'){
                if(!valid(s[i]))return false;
            }
        }
        if(!st.empty())return false;
        return true;
    }
};
