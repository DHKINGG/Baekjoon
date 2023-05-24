#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstring>
using namespace std;


string str,checek;

int main() {

    cin >> str;
    checek = str;

    reverse(checek.begin(), checek.end());

    if (str == checek) cout << 1 << "\n";
    else cout << 0 << "\n";
    

 
    
 
    return 0;
}
