class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "C"){
                st.pop();
            } else if(operations[i] == "D"){
                st.push(st.top() * 2);
            } else if(operations[i] == "+"){
                int first = st.top();
                st.pop();
                int sec = st.top();
                st.pop();
                int sum = first + sec;
                st.push(sec);
                st.push(first);
                st.push(sum);
            } else{
                st.push(stoi(operations[i]));
            }
        }

        int total = 0;
        while(!st.empty()){
            total = total + st.top();
            st.pop();
        }
        return total;
    }
};