#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstring>
using namespace std;


int arr[10001];
int n, k;
int cnt = 0;



int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> k;

    for (int i = 2; i <= n; i++) {
        arr[i] = 1;
    }

    for (int i = 2; i <= n; i++) {
        for (int j = 0; i*j <= n; j++) {
            if (arr[i * j] == 1) {
                arr[i * j] = 0;
                cnt++;

                if (cnt == k) {
                    cout << i * j << "\n";
                }
            }
            
        }
    }

  
    return 0;
}
