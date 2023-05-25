#include <iostream>
#include<vector>
#include<queue>
#include <algorithm>
#include <cstring>
using namespace std;

int arr[100001];
bool check[100001];
vector<int> v[100001];
int n;


void dfs(int x) {
    check[x] = true;

    for (int i = 0; i < v[x].size(); i++) {
        int nx = v[x][i];

        if (!check[nx]) {
            arr[nx] = x;
            dfs(nx);
        }
    }

  
}

int main() {

    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    cin >> n;

    for (int i = 1; i < n; i++) {
        int a, b;
        cin >> a >> b;

        v[a].push_back(b);
        v[b].push_back(a);
    }

    dfs(1);

    for (int i = 2; i <= n; i++) {
        cout << arr[i] << "\n";
    }
   
    return 0;
}
