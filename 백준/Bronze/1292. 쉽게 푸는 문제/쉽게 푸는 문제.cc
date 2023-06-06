#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int a, b;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> a >> b;

	int cnt = 0;
	int sum = 0;
	int arr[1001];

	for (int i = 0; cnt < 1000; i++) {
		for (int j = 0; j < i; j++) {
			arr[cnt++] = i;
			if (cnt == 1000) break;
		}
	}

	for (int i = a-1 ; i <= b-1; i++) {
		sum += arr[i];
	}

	cout << sum << "\n";







	return 0;
}