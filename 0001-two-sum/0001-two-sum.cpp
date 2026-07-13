class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        vector <int> a;
        unordered_map <int,int> m;
        int n = arr.size();
        for(int i = 0; i < n; i++){
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