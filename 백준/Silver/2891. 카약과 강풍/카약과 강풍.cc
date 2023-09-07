#include<algorithm>
#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main() {
    int N, S, R;

    cin >> N >> S >> R;

    vector<int> v(N + 1, 1);

    for (int i = 0; i < S; i++) {
        int tmp;
        cin >> tmp;
        v[tmp]--;
    }
    for (int i = 0; i < R; i++) {
        int tmp;
        cin >> tmp;
        v[tmp]++;
    }

    for (int i = 1; i <= N; i++) {
        if (v[i] == 0) {
            if (v[i - 1] == 2) {
                v[i]++;
                v[i - 1]--;
            }
            else if (v[i + 1] == 2) {
                v[i + 1]--;
                v[i]++;
            }
        }
    }

    int result = 0;
    for (int i = 1; i <= N; i++) {
        if (v[i] == 0) result++;
    }

    cout << result;


    return 0;
}
