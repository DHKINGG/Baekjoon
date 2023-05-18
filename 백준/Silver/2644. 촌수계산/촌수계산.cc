#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, m, x, y;
vector<int>v[101];
int dist[101];
queue<int> q;





int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	for (int i = 0; i < 101; i++) {
		dist[i] = -1;
	}
  
	cin >> n >> x >> y >> m;

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	dist[x] = 0;
	q.push(x);

	while(!q.empty()) {

		int aa = q.front();
		q.pop();
		for (int i = 0; i < v[aa].size(); i++) {
			int naa = v[aa][i];

			if (dist[naa] != -1) continue;

			q.push(naa);
			dist[naa] = dist[aa] + 1;
		}

	}

	cout << dist[y] << "\n";

	

	return 0;
}