class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int,int> m;
        vector<int> a;
        for(int i = 0; i < arr.size(); i++){
            int first = arr[i];
            int sec = tar - first;
            if(m.find(sec) != m.end()){
                a.push_back(i);
                a.push_back(m[sec]);
                break;
            }
            m[first] = i;
        }
        return a;
    }
};