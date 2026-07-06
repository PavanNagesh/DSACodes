class Solution {
public:
    int search(vector<int>& nums, int target) {
        int str = 0;
        int end = nums.size() - 1;

        while(str <= end){
            int mid = str+(end-str)/2;
            if(target > nums[mid]){
                str = mid+1;
            } else if(target < nums[mid]){
                end = mid-1;
            } else{
                return mid;
            }
        }
        return -1;
    }
};