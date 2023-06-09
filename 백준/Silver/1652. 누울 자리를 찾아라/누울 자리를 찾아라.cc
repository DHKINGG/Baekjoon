#include <iostream>
#include <algorithm>
#include <string>	
using namespace std;

int n;
int row;
int column;
char box[110][110];
string s;

void checkrow(int x) {
	bool flag = false;
	for (int i = 0; i < n; ++i) {
		if (!flag && box[i][x] == '.' && box[i + 1][x] == '.') {
			++row;
			flag = true;
		}
		if (flag && box[i][x] == 'X') {
			flag = false;
		}
	}
}

void checkcolumn(int x)
{
	bool flag = false;
	for (int i = 0; i < n; ++i) {
		if (!flag && box[x][i] == '.' && box[x][i + 1] == '.') {
			++column;
			flag = true;
		}
		if (flag && box[x][i] == 'X') {
			flag = false;
		}
	}
}

int main()
{
	row = 0;
	column = 0;

	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> s;
		for (int j = 1; j <= n; ++j) {
			box[i][j] = s[j - 1];
		}
	}

	for (int i = 1; i <= n; ++i) {
		checkrow(i);
	}
	for (int i = 1; i <= n; ++i) {
		checkcolumn(i);
	}

	cout << column << " " << row << "\n";
	return 0;
}