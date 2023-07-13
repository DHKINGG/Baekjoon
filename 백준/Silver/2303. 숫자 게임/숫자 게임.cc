#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;


int n;
int card[1000][5];
int score[1000];


int main() {

	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
		cin >> card[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 5; j++) {
			for (int k = j+1; k < 5; k++) {
				for (int l = k+1; l < 5; l++) {
					if (score[i] < (card[i][j] + card[i][k] + card[i][l]) % 10)
					score[i] = (card[i][j] + card[i][k] + card[i][l]) % 10;
				}
			}
		}
	}

	int max = 0;
	int idx = 0;

	for (int i = 0; i < n; i++) {
		if (max < score[i]) {
			max = score[i];
			idx = i;
		}
		if (max == score[i]) {
			if (i > idx) {
				idx = i;
			}
		}

	}

	cout << idx + 1 << "\n";
	
	return 0;

}