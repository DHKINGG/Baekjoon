#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;


int n;
int k;
int arr[11];
int sum = 0;


int main() {

	iostream::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = n - 1; i >= 0; i--) {
		sum += k / arr[i];
		k = k % arr[i];
	}

	cout << sum << "\n";

	
	return 0;
}