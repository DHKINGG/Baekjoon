#include<algorithm>
#include<iostream>
#include<vector>
#include<string>

using namespace std;

int n, m;
int k;
int a[101][101];
int b[101][101];

int sum[101][101];

int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);


	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}

	cin >> m >> k;

	for (int i = 0; i < m; i++) {
		for (int j = 0; j < k; j++) {
			cin >> b[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < k; j++) {
			for (int k = 0; k < m; k++) {
				sum[i][j] += a[i][k] * b[k][j];
			}
			cout << sum[i][j] << " ";
		}
		cout << "\n";
	}
	



	
	




	return 0;
}