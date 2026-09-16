class Solution {
public:
    static bool compare(vector<int>& a, vector<int>& b){
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), compare);
        int maxVal = 0;

        for(auto& a : boxTypes){
            int wt = a[0];
            int val = a[1];

            if(wt <= truckSize){
                maxVal += wt*val;
                truckSize -= wt; 
            } else{
                maxVal += truckSize * val;
                break;
            }
        }
        return maxVal;
    }
};