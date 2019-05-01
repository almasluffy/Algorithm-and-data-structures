#include <bits/stdc++.h>

using namespace std;

vector<vector<int> > v;
vector<int> distances;
vector<bool> used;
vector<int> parents;
queue<int> q;

void bfs(int node){
	q.push(node);
	used[node] = true;
	while(!q.empty()){
		int a = q.front();
		q.pop();
		for(int i = 0;i<v[a].size();++i){
			int to = v[a][i];
			if(!used[to]){
				used[to] = true;
				q.push(to);
				distances[to] = distances[a] + 1;
			}
		}
	}
}

int main(){

	int n;
	cin >> n;
	
	distances.resize(n+1);
	used.resize(n+1);
	v.resize(n+1);
	parents.resize(n+1);

	while(n--){
		int u,k;
		cin >> u >> k;
		while(k--){
			int child;
			cin >> child;
			v[u].push_back(child);
		}
	}
	bfs(1);

	for(int i = 1;i<v.size();++i){
		if(!used[i]){
			distances[i] = -1;
		}
	}

	for(int i = 1;i<distances.size();++i){
		cout << i << " " <<distances[i] << "\n";
	}

	return 0;
}