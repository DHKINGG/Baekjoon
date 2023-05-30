#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

long long s;


int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> s;
	
	int num = 1;
	int cnt = 0;
	long long sum = 0;

	while (1) {
		sum +=num;
		cnt++;
		if (sum > s) {
			cnt--;
			break;
		}
		num++;
	}

	cout << cnt;
	return 0;
}