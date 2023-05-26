#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstring>
using namespace std;

int e, s, m;
int year = 1;




int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> e >> s >> m;

    while (1) {
        if ((year - e) % 15 == 0 && (year - s) % 28 == 0 && (year - m) % 19 == 0)   break;
        else  year ++;

    }

    cout << year << "\n";
   
  
    return 0;
}
