class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> v(n, 1);

        for(int i = 1; i < n; i++){
            v[i] = v[i-1]*nums[i-1];
        }

        int suf = 1;
        for(int j = n-2; j >= 0; j--){
            suf = suf * nums[j+1];
            v[j] = v[j]*suf;
            
        }
        return v;
    }
};