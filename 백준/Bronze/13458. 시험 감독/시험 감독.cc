#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;



int main() {

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	cin >> n;

	vector<int> v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}

	int b, c;
	cin >> b >> c;

	long long cnt = 0;

	

	for (int i = 0; i < n; i++) {
		if (v[i] <= b) {
			cnt++;
		}
		else {
			cnt += (v[i] - b) / c + 1;
			if ((v[i] - b) % c != 0)
				cnt++;
		}
		
	}


	cout << cnt << "\n";

	return 0;
}