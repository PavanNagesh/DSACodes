class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int a = 1;
        int n = nums.size();
        while(i < n){
            if(nums[i] != nums[i-1]){
                nums[a] = nums[i];
                a++;
            }
            i++;
        }
        return a;
    }
};