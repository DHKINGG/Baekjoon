#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstring>
using namespace std;


string str,checek;

int main() {

  
	while (str != "0") { // 0이 마지막 입력값임

        cin >> str;
        checek = str;

        reverse(checek.begin(), checek.end());

        if (str != "0") {
            if (checek == str) cout << "yes" << "\n";
            else cout << "no" << "\n";
        }

  }
 
    return 0;
}
