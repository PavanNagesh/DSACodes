class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp = 0;
        int rp = height.size() - 1;
        int h, w, area;
        int maxarea = 0;
        while(lp < rp){
            h = min(height[lp], height[rp]);
            w = rp - lp;
            area = w * h;
            maxarea = max(maxarea, area);
            height[lp] < height[rp] ? lp++ : rp--;
        }
        return maxarea;
    }
};