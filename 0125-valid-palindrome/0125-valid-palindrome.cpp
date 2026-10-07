class Solution {
public:
    bool isAlphaNum(char c){
        if(tolower(c) >= 'a' && tolower(c) <= 'z' || c >= '0' && c <= '9'){
            return true;
        } else{
            return false;
        }
    }

    bool isPalindrome(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start < end){
            if(!isAlphaNum(s[start])){
                start++;
                continue;
            }

            if(!isAlphaNum(s[end])){
                end--;
                continue;
            }

            if(tolower(s[start]) != tolower(s[end])){
                return false;
            }

            start++;
            end--;
        }

        return true;
    }
};