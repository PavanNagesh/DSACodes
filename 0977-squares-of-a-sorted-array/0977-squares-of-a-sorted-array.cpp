class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n, 1);
        int last = n-1;
        int st = 0;
        int end = n-1;
        while(st <= end){
            if(abs(nums[st]) > abs(nums[end])){
                ans[last] = nums[st]*nums[st];
                st++;
                last--;
            } else{
                ans[last] = nums[end]*nums[end];
                end--;
                last--;
            }
        }
        return ans;
    }
};