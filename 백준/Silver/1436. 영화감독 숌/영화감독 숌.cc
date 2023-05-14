#include <iostream> 
#include <string>
#include <algorithm>
using namespace std;

int n, ans, cnt, temp;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	ans = 0;
	cnt = 0;
	
	cin >> n;

	while (cnt != n) {
		ans++;
		temp = ans;

		while (temp != 0) {
			if (temp % 1000 == 666) {
				cnt++;
				break;
			}
			else {
				temp /= 10;
			}
		}
	}
	cout << ans;
 
	return 0;
}