#include <iostream> 
#include <string>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

    int n; vector<int> v;
    cin >> n;

    for (int i = 1; i <= 45; i++) {
        v.push_back(i * (i + 1) / 2);
    }

    for (int cnt = 0; cnt < n; cnt++) {
        int count = 0, data;
        cin >> data;

        for (int i = 0; i < v.size(); i++) {
            for (int j = 0; j < v.size(); j++) {
                for (int k = 0; k < v.size(); k++) {
                    if (v[i] + v[j] + v[k] == data) {
                        count++;
                        break;
                    }
                }
                if (count) break;
            }
            if (count) break;
        }

        cout << count << "\n";
    }
	



	return 0;
}