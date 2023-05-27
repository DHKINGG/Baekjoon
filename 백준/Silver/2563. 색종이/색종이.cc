#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstring>
using namespace std;

int arr[100][100];




int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, x, y;
    int cnt = 0;
    cin >> n;

    while (n--) {
        cin >> x >> y;
        for (int i = y; i < y + 10; i++) {
            for (int j = x; j < x + 10; j++) {
                if (!arr[i][j]) {
                    cnt++;
                    arr[i][j] = 1;
                }
            }
        }
    }
    

   
    cout << cnt << "\n";
  
    return 0;
}
