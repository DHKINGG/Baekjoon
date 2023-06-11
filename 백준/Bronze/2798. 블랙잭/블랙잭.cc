#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n, m;
	int arr[101];
	int sum = 0;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] <= m && arr[i] + arr[j] + arr[k] > sum) {
					sum = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}

	cout << sum << "\n";


}