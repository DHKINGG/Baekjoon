#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

int n, m, k;
bool check[102][102];
int arr[102][102];
vector<int> v;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int cnt = 1;

void dfs(int x , int y) {
    check[x][y] = true;

    for (int dir = 0; dir < 4; dir++) {
        int nx = x + dx[dir];
        int ny = y + dy[dir];

        if (nx < 0 || nx > n || ny < 0 || ny > m) continue;
        if (arr[nx][ny] == 1 && check[nx][ny] == 0) {
            check[nx][ny] = true;
            cnt++;
            dfs(nx, ny);
        }
    }
}

// sort 같은거 정수중에 큰것 선택.
bool compare(int i, int j) {
    return i > j;
}


int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n >> m >> k;

    while (k--) {
        int r, c;
        cin >> r >> c;
        arr[r][c] = 1;
    }

    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) {
            if (arr[i][j] == 1 && check[i][j] == 0) {
                dfs(i,j);
                v.push_back(cnt);
                cnt = 1;
                
            }
        }
    }
    sort(v.begin(), v.end(), compare); // 오름차순
    cout << v[0]; // 오름차순에서 가장큰거 출력 

   

  

    return 0;
}

