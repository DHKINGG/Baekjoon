#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;




int factorial(int num) {
    if (num == 0) return 1;

    int result = 1;

    for (int i = num; i >= 1; i--) {

        result *= i;

    }
    return result;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, k;
    cin >> n >> k;

    int result = factorial(n) / (factorial(k) * factorial(n - k));

    cout << result;
   
    return 0;
}

