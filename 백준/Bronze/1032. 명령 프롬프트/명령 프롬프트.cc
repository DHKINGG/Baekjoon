#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstring>
using namespace std;

int n;


int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int n;
    cin >> n;

    string s;
    cin >> s;
    string result = s;

    for (int i = 1; i < n; i++) {
        string k;
        cin >> k;
        for (int j = 0; j < s.length(); j++) {
            if (s[j] != k[j]) {
                result[j] = '?';
            }
        }
    }

    cout << result << "\n";

    return 0;
}
