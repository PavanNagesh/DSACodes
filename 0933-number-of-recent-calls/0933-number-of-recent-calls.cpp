class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int lower_limit = t - 3000;
        q.push(t);
        while(!q.empty() && q.front() < lower_limit){
            q.pop();
        }
        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */