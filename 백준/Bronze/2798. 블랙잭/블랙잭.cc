#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int arr[101] = {};
	int n, m;
	int sum = 0;

	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
		

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				if (arr[i] + arr[j] + arr[k] <=m && arr[i] + arr[j] + arr[k] > sum) {
					sum = arr[i] + arr[j] + arr[k];
				}
			}
		}
	} cout << sum << "\n";


	return 0;
}