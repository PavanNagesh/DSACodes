class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int cursum = 0;
        int maxSum =INT_MIN;

        for(int i : nums){
            cursum = cursum + i;
            maxSum = max(maxSum, cursum);
            if(cursum < 0){
                cursum = 0;
            }
        }
        return maxSum;
    }
};