class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        int n = nums.size();
        unordered_set<int> s;
        for(int i = 0; i < n; i++){
            if(s.find(nums[i]) != s.end()){
                ans = nums[i];
                break;
            }
            s.insert(nums[i]);
        }
        return ans;
    }
};