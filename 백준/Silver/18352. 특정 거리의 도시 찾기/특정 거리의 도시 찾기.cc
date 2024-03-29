#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

vector <int> v[300001];
int dist[300001] = { 0, };
int n, m, k, x, z; 

void bfs(int x) {
	queue <int> q;
	q.push(x);

	while (!q.empty()) {
		int nx = q.front();
		q.pop();

		for (int i = 0; i < v[nx].size(); i++) {
			int z = v[nx][i];
			if (dist[z] == 0 && z != x) { 
				dist[z] = dist[nx] + 1;
				q.push(z);
			}
		}
	}
}


int main() {

	cin >> n >> m >> k >> x;

	int i1, i2;
	for (int i = 0; i < m; i++) {
		cin >> i1 >> i2;
		v[i1].push_back(i2);
	}

	bfs(x);

	vector<int> answer;
	for (int i = 1; i <= n; i++) {
		if (dist[i] == k)
			answer.push_back(i);
	}
	if (answer.size() == 0)
		cout << -1 << endl;
	else {
		sort(answer.begin(), answer.end());
		for (int i = 0; i < answer.size(); i++) {
			cout << answer[i] << endl;
		}
	}
}