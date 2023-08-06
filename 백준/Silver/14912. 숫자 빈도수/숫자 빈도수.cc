#include<algorithm>
#include<iostream>
#include<vector>
#include<vector>
#include<tuple>
#include<queue>
#include <string>

using namespace std;


int main() {
  
	int n;
	char d;

	cin >> n >> d;

	int result = 0;

	for (int i = 1; i <= n; i++) {
		string s = to_string(i);
		for (int j = 0; j < s.size(); j++) {
			if (s[j] == d) {
				result++;
			}
		}
	}
	cout << result;

	return 0;
   
}