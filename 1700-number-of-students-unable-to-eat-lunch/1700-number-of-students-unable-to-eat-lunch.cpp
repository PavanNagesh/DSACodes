class Solution {
public:
    queue<int> q;
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        for(int i = 0; i < students.size(); i++){
            q.push(students[i]); 
        }
        int unsuc = 0;
        int sand = 0;
        while(unsuc < q.size()){
            if(q.front() == sandwiches[sand]){
                q.pop();
                sand++;
                unsuc = 0;
            } else{
                int front = q.front();
                q.pop();
                q.push(front);
                unsuc++;
            }
        }
        
        return unsuc;
    }   
};