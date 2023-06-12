#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


int n, m, k;
int arr[51][51];
bool check[51][51];
int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,-1,1 };


void dfs(int x, int y) {

	check[x][y] = true;

	for (int dir = 0; dir < 4; dir++) {
		int nx = x + dx[dir];
		int ny = y + dy[dir];

		if (check[nx][ny]) continue;
		if (arr[nx][ny] != 1) continue;
		if (nx < 0 || nx >= m || ny < 0 || ny >= n) continue;

		dfs(nx, ny);
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int t; 
	
	cin >> t;
	
	while (t--) {
		for (int i = 0; i < 51; i++) {
			for (int j = 0; j < 51; j++) {
				arr[i][j] = 0;
				check[i][j] = false;
			}
		}


		cin >> m >> n >> k;
		int cnt = 0;

		while (k--) {
			int x, y;
			cin >> x >> y;
			arr[x][y] = 1;
		}

		for (int i = 0; i < m; i++) {
			for (int j = 0; j < n; j++) {
				if (arr[i][j] == 1 && !check[i][j]) {
					cnt++;
					dfs(i, j);
				}
			}
		}
		cout << cnt << "\n";
	}

	

	return 0;

}