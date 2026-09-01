class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() - 1;
        int ht, wt, area;
        int maxArea = 0;

        while(lp < rp){
            ht = min(height[lp], height[rp]);
            wt = rp - lp;
            area = wt * ht;
            maxArea = max(maxArea, area);
            
            height[lp] < height[rp] ? lp++ : rp--;

        }

        return maxArea;
    }
};