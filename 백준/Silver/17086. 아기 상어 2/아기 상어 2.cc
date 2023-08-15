#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <string.h>

using namespace std;

int n, m;
int arr[50][50]; 
int dist[50][50]; 
int check[50][50];
queue <pair<int, int>> q;

//8방향
int dx[] = { -1,-1,-1,0,1,1,1,0 };
int dy[] = { -1,0,1,1,1,0,-1,-1 };

int answer;

void bfs(int x, int y) {
    check[x][y] = true;
    q.push({ x,y });

    while (!q.empty()) {
        int cx = q.front().first;
        int cy = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];
            if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
                if (arr[nx][ny] == 0) {
                    if (check[nx][ny] == false) {
                        check[nx][ny] = true;

                        int temp = dist[cx][cy] + 1;
                        if (dist[nx][ny] == 0) { 
                            dist[nx][ny] = temp;
                        }
                        else if (dist[nx][ny] > temp) { 
                            dist[nx][ny] = temp;
                        }
                        q.push({ nx,ny });
                    }
                }
            }
        }
    }


}

int main() {
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            memset(check, false, sizeof(check));
            if (arr[i][j] == 1) {
                bfs(i, j);
            }
        }
    }

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (answer < dist[i][j])
                answer = dist[i][j];
        }
    }

    cout << answer << "\n";
}