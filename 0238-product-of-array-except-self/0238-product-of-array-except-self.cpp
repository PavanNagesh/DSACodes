class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> product (n,1);

        //prod_left
        for(int i = 1; i < n; i++){
            product[i] = product[i-1] * nums[i-1];
        }

        //prod_right
        int suf = 1;
        for(int j = n-2; j >= 0; j--){
            suf = suf * nums[j+1];
            product[j] = product[j] * suf;
        }
        return product;
    }
};