#include <string>
#include <vector>

using namespace std;

bool check[201];

void dfs(int x,int n,vector<vector<int>> computers) {
    
    check[x] = true;
    
    for(int i = 0; i < n; i++){
        if(!check[i] && computers[x][i] == 1) {
            dfs(i,n,computers);
        }
    }
}


int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    
    for(int i = 0; i < n; i++){
        if(!check[i]){
            dfs(i,n,computers);
            answer++;
        }
    }
   
    
    return answer;
}