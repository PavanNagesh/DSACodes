class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans;
        unordered_set<int> s;
        int n = nums.size();
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