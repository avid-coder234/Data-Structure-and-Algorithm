//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        // Initilization of visited array
        int vis[V] = {0};
        vis[0] = 1;
        
        queue<int> q;
        q.push(0);
        vector<int> bfs;
        // Jab tak queue empty nahi ho jati hai
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            // queue k front ko store krke bfs vector me push karo
            bfs.push_back(node);
            
            // Is step me us particular front k adj list k saare elements ko traverse krne k liye ye loop hai
            for(auto i : adj[node]){
                // Agr adj list ki elements visited nahi hai toh visit karo aur queue me push karo
                if(!vis[i]){
                    vis[i] = 1;
                    q.push(i);
                }
            }
        }
        
        return bfs;
    }
};

//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int V, E;
        cin >> V >>

            E;

        vector<int> adj[V];

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            // 		adj[v].push_back(u);
        }
        // string s1;
        // cin>>s1;
        Solution obj;
        vector<int> ans = obj.bfsOfGraph(V, adj);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends