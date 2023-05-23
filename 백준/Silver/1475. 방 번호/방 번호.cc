#include <iostream>
#include <cstring>
using namespace std;


int n;
int arr[10];

int main() {

    cin >> n;

    while (true) {
        arr[n % 10]++;
        if (n / 10 == 0) break;
        n /= 10;
    }

    int cnt = 0;

    for (int i = 0; i < 10; i++) {
        if (i != 9 && i != 6) {
            cnt = max(cnt, arr[i]);
       }
    }

    cout << max(cnt, (arr[6] + arr[9] + 1) / 2);

    
    return 0;
}
