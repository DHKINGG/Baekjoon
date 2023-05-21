#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include <queue>

using namespace std;

int n,m;
queue<int> q;
int arr[101][101];
bool check[101];
int cnt = 0;


void bfs(int x) {
	check[x] = true;

	q.push(x);
	while (!q.empty()) {
		x = q.front();
		q.pop();
		
		for (int i = 1; i <= n; i++) {
			if (check[i] == 0 && arr[x][i] == 1) {
				q.push(i);
				check[i] = true;
				cnt++;
			}
		}
	}
}


int main() {


	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		arr[a][b] = 1;
		arr[b][a] = 1;
	}
	
	bfs(1);

	cout << cnt;

	return 0;}