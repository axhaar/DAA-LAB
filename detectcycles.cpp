#include <iostream>
#include <set>

using namespace std;

int graph[5][5] = {
	{0, 1, 0, 0, 0},
	{1, 0, 1, 1, 0},
	{0, 1, 0, 0, 1},
	{0, 1, 0, 0, 1},
	{0, 0, 1, 1, 0}
};

bool dfs(int vertex, set<int>&visited, int parent)
{
	visited.insert(vertex);
	for(int v=0;v<5;v++)
	{
		if(graph[vertex][v])
		{
			if(v==parent)
				continue;
			if(visited.find(v) != visited.end())
				return true;
			if(dfs(v, visited, vertex))
				return true;
		}
	}	
}

bool hasCycle()
{
	set<int> visited;
	for(int v=0;v<5;v++)
	{
		if(visited.find(v) != visited.end())
			continue;
		if(dfs(v, visited, -1))
			return true;
	}
	return false;
}

int main()
{
	bool res;
	res = hasCycle();
	if(res)
		cout<<"The graph has cycle\n";
	else
		cout<<"The graph has no cycle\n";
	return 0;	
}
