class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxA = 0;
        int n = height.size();
        int st = 0;
        int end = n-1;
        int ht, wt;
        int area;

        while(st < end){
            int ht = min(height[st], height[end]);
            int wt = end - st;
            area = ht*wt;
            maxA = max(maxA, area);

            height[st] < height[end] ? st++ : end--;
        }
        return maxA;
    }
};