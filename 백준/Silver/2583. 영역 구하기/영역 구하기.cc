#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int adj[101][101];
int visit[101];
int arr[101];
int m, n, k;

int arrcount = 0; 
int cnt = 0;
int moveX[4] = { 0, 1, 0, -1 };
int moveY[4] = { 1, 0, -1, 0 };

void dfs(int a, int b) {
    if (adj[a][b] == 0) {
        adj[a][b] = 1;
        cnt++;

        for (int l = 0; l < 4; ++l) {
            int x = moveX[l] + a;
            int y = moveY[l] + b;

            if (x >= 0 && y >= 0 && x < m && y < n) {
                dfs(x, y);
            }
        }
    }
}

int main() {

    int x1, y1, x2, y2;

    cin >> m >> n >> k;

    for (int i = 0; i < k; i++) {
        cin >> x1 >> y1 >> x2 >> y2;

        for (int i = x1; i < x2; ++i) {
            for (int j = y1; j < y2; ++j) {
                adj[j][i] = 1;
            }
        }
    }
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (adj[i][j] == 0) {
                cnt = 0;
                dfs(i, j);
                arr[arrcount++] = cnt;
            }
        }
    } 

    cout << arrcount << endl;

    sort(arr, arr + arrcount); 
    for (int i = 0; i < arrcount; ++i) {
        cout << arr[i] << " ";
    }
}


