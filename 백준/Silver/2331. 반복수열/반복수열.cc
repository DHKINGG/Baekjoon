#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <cmath>

using namespace std;


int check[3000001];
int p;

void dfs(int x) {
    check[x]++;
    if (check[x] == 3) return;

    int sum = 0;

    while (x) {
        sum += (int)pow((x % 10), p);

        x /= 10;
    }
    dfs(sum);
}
int main() {
    int n, ans = 0;

    cin >> n >> p;

    dfs(n);

    for (int i = 0; i < 300001; i++) {
        if (check[i] == 1) ans++;
    }
    cout << ans;


    return 0;
}