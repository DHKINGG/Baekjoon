#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int n;
int k;
int gold[1001];
int silver[1001];
int bronze[1001];
int cnt = 0;

int main() {
	

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		int idx;
		cin >> idx;
		cin >> gold[idx] >> silver[idx] >> bronze[idx];
		
	}
	
	for (int i = 0; i < n; i++) {
		if (gold[i] > gold[k]) {
			cnt++;
		}
		else if (gold[i] == gold[k]) {
			if (silver[i] > silver[k]) {
				cnt++;
			}
		}
		else if (silver[i] = silver[k]) {
			if (bronze[i] > bronze[k]) {
				cnt++;
			}
		}
	}
	

	cout << cnt+1;

	return 0;
}