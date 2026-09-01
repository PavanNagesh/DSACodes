class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        unordered_map<int, int> m;
        int n = nums.size();
        for(int i = 0 ; i < n; i++){
            int first = nums[i];
            int second = target - first;
            if(m.find(second) != m.end()){
                arr.push_back(i);
                arr.push_back(m[second]);
                break;
            }
            m[first] = i;
        }
        return arr;
    }
};