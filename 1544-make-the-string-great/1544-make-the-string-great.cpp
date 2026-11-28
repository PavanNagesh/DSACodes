class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for(int i = 0; i < s.length(); i++){
            if(st.empty()){
                st.push(s[i]);
            } else{
                if(isupper(s[i]) && islower(st.top()) && tolower(s[i]) == tolower(st.top()) || islower(s[i]) && isupper(st.top()) && tolower(s[i]) == tolower(st.top())){
                    st.pop();
                }
                else{
                    st.push(s[i]);
                }
            }
        }

        string ans = "";
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};