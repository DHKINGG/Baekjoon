#include<algorithm>
#include<iostream>
#include<vector>
#include<vector>

using namespace std;


int j[9];
int s[9];



int main() {

	int jscore = 0;
	int sscore = 0;
	int stat = 0;

	for (int i = 0; i < 9; i++) {
		cin >> j[i];
	}

	for (int i = 0; i < 9; i++) {
		cin >> s[i];
	}

	for (int i = 0; i < 9; i++) {
		jscore += j[i];
		if (jscore > sscore) stat = 1;
		sscore += s[i];
		if (jscore < sscore && stat == 1) stat = 2;
	}

	if (stat == 2) cout << "Yes";
	else cout << "No";
	





	return 0;

}