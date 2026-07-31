class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int a = 1;
        int i = 1;

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