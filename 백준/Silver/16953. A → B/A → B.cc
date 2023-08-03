#include<algorithm>
#include<iostream>
#include<vector>
#include<vector>
#include<tuple>
#include<queue>

using namespace std;







int main() {

	int a, b;

	cin >> a >> b;
	
	int cnt = 0;

	while (true) {
		if (a == b)  break;
		else if (b < a) {
			cnt = -2;
			break;
		}

		if (b % 2 == 0) b /= 2;

		else if (b % 10 == 1) b /= 10;

		else {
			cnt = -2;
			break;
		}

		cnt++;
	}
	
	cout << cnt + 1 << "\n";

	return 0;

}