#include<algorithm>
#include<iostream>
#include<vector>
#include<vector>

using namespace std;


int jemi[9];
int gri[9];

int jemiscroe = 0;
int griscore = 0;


int main() {

	int stat = 0;

	for (int i = 0; i < 9; i++) {
		cin >> jemi[i];
	}

	for (int i = 0; i < 9; i++) {
		cin >> gri[i];
	}

	for (int i = 0; i < 9; i++) {
		jemiscroe += jemi[i];
		if (jemiscroe > griscore) stat = 1;
		griscore += gri[i];
		if (jemiscroe < griscore && stat == 1) stat = 2;
	}

	if (stat == 2) cout << "Yes";
	else cout << "No";
	






	return 0;

}