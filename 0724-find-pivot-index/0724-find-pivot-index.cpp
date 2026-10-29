class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        int totalSum = 0;
        while(i < n){
            totalSum = totalSum + nums[i];
            i++;
        }
        int leftsum = 0;
        for(int i = 0; i < n; i++){
            int rightsum = totalSum - leftsum - nums[i];
            if(leftsum == rightsum){
                return i;
            }
            leftsum = leftsum + nums[i];
        }
        return -1;
    }
};