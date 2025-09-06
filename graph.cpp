#include<iostream>
#include<vector>
#include<queue>
using namespace std;
void print_adj(vector<int> adj[], int n) {
    for (int i = 1; i <= n; i++) { // Iterate over each vertex
        cout << i << " -> ";       // Print the current vertex
        for (int neighbor : adj[i]) { // Iterate over its neighbors
            cout << neighbor << " ";
        }
        cout << endl;              // Newline after each vertex's neighbors
    }
};
vector<int>bfsofGraph(vector<int>adj[],int n){
    int visited[n]={0};
        visited[0]={1};
        queue<int> q;
        q.push(0);
        vector<int>bfs;

        //right code
      for (int i = 1; i <= n; i++) { // Handle disconnected components
        if (!visited[i]) {
           q.push(i);
            visited[i] = 1;

             while (!q.empty()) {
               int node = q.front();
                q.pop();
                 bfs.push_back(node);

                 for (int neighbor : adj[node]) {
                     if (!visited[neighbor]) {
                         q.push(neighbor);
                         visited[neighbor] = 1;
                     }
                 }
             }
         }
     }
 return bfs;

}
//         //striver code
//         while (!q.empty()) {
//                  int node = q.front();
//                 q.pop();
//                bfs.push_back(node);
//                for(auto it : adj[node]){
//                  if (!visited[it]) {
//              q.push(it);
//              visited[it] = 1;
//                }
//             }
//         }
//         return bfs;
// }

int main(){
    int n ,m;
    cout<<"Enter number of vertex and edges"<<endl;
    cin>>n>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m; i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    
    }
    print_adj(adj,n);
vector<int> bfs = bfsofGraph(adj, n);

    cout << "BFS Traversal:" << endl;
    for (int node : bfs) {
        cout << node << " ";
    }
    
    return 0;
}