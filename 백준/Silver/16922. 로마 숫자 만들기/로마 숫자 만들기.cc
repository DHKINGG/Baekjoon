#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;


bool check[10000];
int n;
int roma[4] = { 1,5,10,50 };
int result = 0;

void solve(int cnt,int number,int idx) {

	if (cnt == n) {
		if (check[number]) return;
		check[number] = 1;
		result++;
		return;
	}

	for (int i = idx; i < 4; i++) {
		solve(cnt + 1, number + roma[i], i);
	}

}

int main() {

	iostream::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);




	cin >> n;
	solve(0, 0, 0);
	cout << result;


	return 0;
}