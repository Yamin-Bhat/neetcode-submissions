class Solution {
public:
    void no_of_bfs(vector<vector<int>> &adj , int &n , queue<int> &q , vector<bool>&vis){
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            if(vis[node]) continue;
            vis[node] = true;
            for(int it : adj[node]){
                if(!vis[it]){
                    q.push(it);
                }
            }
        }
   
    }


    int countComponents(int n, vector<vector<int>>& edges) {
        queue<int> q;
        vector<vector<int>> adj(n);
        for(auto ele : edges){
            adj[ele[0]].push_back(ele[1]);
            adj[ele[1]].push_back(ele[0]);
        }
        vector<bool> vis(n , false);
        q.push(edges[0][0]);
        int num = 0;
        while(!q.empty()){
            no_of_bfs(adj , n , q , vis);
            num++;
            for(int i = 0 ; i < vis.size() ; i++){
                if(!vis[i]){
                    q.push(i);
                    break;
                }
            }
            
        }
        return num;
    }
};
