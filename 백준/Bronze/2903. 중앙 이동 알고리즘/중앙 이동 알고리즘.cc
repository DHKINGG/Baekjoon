#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int n;
	cin >> n;
	int b = 1;

	for (int i = 1; i <= n; i++) {
		b *= 2;
	}
	cout << (1 + b) * (1 + b) << "\n";



	return 0;
}