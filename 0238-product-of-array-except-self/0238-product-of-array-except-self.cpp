class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prod(n, 1);

        for(int i = 1; i < n; i++){
            prod[i] = prod[i-1] * nums[i-1];
        }

        int suf = 1;
        for(int j = n-2; j >= 0; j--){
            suf = suf * nums[j+1];
            prod[j] = prod[j] * suf;
        }
        return prod;
    }
};