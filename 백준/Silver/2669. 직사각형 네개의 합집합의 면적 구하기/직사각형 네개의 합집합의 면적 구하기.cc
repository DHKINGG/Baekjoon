#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


int arr[101][101];
int cnt;



int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x1, y1, x2, y2;

	

	for (int i = 0; i < 4; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		for (int i = x1; i < x2; i++)
			for (int j = y1; j < y2; j++)
				arr[i][j]++;
	}

	

	

	for (int i = 0; i < 101; i++) {
		for (int j = 0; j < 101; j++) {
			if (arr[i][j] > 0) cnt++;
		}
	}

	cout << cnt << "\n";
	


	


	return 0;

}