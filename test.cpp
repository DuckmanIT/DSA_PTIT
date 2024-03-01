#include<bits/stdc++.h>

using namespace std;

vector<int> adj[1001];
bool visited[1001];
void dfs(int u)
{
	cout << u << " ";
	visited[u] = true;
	for (int v : adj[u])
	{
		if(!visited[v])
			dfs(v);
	}
}

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] = true;
	while(!q.empty())
	{
		int v = q.front();
		q.pop();
		cout << v << " ";
		for(int x : adj[v])
		{
			if(!visited[x])
			{
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

int a[1001][1001];
int main()
{
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 1; i <= n; i++)
	{
		string s, num;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> num)
		{
			if(stoi(num) > i)
			{
				
			}
		}
	}
	return 0;
}
