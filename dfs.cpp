#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v){
	adj[u].push_back(v);
	adj[v].push_back(u);
}


void dfs(vector<int> adj[], int u, bool visited[]){
	visited[u] = true;
	cout<<u<<" ";
	
	vector<int> :: iterator it;
	
	for(it = adj[u].begin(); it != adj[u].end(); it++){
		if(!visited[*it])
			dfs(adj,*it,visited);
	}	
}

int main(){
	int n=5;
	
	vector<int> adj[n];
	addEdge(adj,0, 1);    
    addEdge(adj,0, 2);    
    addEdge(adj,0, 3);    
    addEdge(adj,1, 3);    
    addEdge(adj,2, 4);
     
	bool visited[n] = {false};
	
	for(int i=0; i<n; i++)
  {
		if(!visited[i])
			dfs(adj,i,visited);
	}
}
