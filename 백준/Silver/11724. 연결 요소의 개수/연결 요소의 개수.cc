#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

int n, m;
vector<int> v[1001];
bool check[1001];

void dfs(int x) {
    check[x] = true;
    
    for (int i = 0; i < v[x].size(); i++) {
        int nx = v[x][i];
        if (check[nx]) continue;
        dfs(nx);
    }
}

int main() {
    for (int i = 0; i < 1001; i++) {
        v[i].clear();
    }
    cin >> n >> m;
    for (int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        if (check[i]) continue;
        cnt++;
        dfs(i);
    }
    cout << cnt << "\n";
    
    return 0;
}
