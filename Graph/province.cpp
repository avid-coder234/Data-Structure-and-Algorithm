//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
    private:
    void dfs(int node,vector<int> adjls[],int vis[]){
        vis[node] = 1;
        for(auto i:adjls[node]){
            if(!vis[i]){
            dfs(i,adjls,vis);    
            }
        }
    }
  public:
    int numProvinces(vector<vector<int>> adj, int V){
        // Isme phele hum matrix me di hue data ko adjency list me store krenge 
       vector<int> adjls[V];
       for(int i = 0 ; i < V ; i++){
           for(int j = 0 ; j < V ; j++){
               if(adj[i][j] == 1 && i!=j){
                   adjls[i].push_back(j);
                   adjls[j].push_back(i);
               }
           }
       }
       // ye rountine step visited array bnao 
       int vis[V] = {0};
       int count = 0;
       for(int i = 0 ; i < V ; i++){
           if(!vis[i]){
               count++;
               dfs(i,adjls,vis);
           }
       }
       return count;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends