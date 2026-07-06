class Solution {
public:
    bool isPalindrome(int x) {
        int numCopy = x;
        int revNum = 0;

        if(x < 0){
            return 0;
        }
        
        while(x != 0){
            int digit = x % 10;
            if(revNum < INT_MIN/10 || revNum > INT_MAX/10){
                return 0;
            }
            revNum = revNum * 10 + digit;
            x = x/10;
        }
        return revNum == numCopy;
    }
};