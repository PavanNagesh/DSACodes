class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        int st = 0;
        int end = n-1;

        while(st < end){
            int sum = nums[st] + nums[end];
            if(sum > target){
                end--;
            } else if(sum < target){
                st++;
            } else{
                ans.push_back(st+1);
                ans.push_back(end+1);
                break;
            }
        }
        return ans;
    }
};