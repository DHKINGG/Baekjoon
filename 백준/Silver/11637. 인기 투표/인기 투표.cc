#include <iostream>
#include <vector>
#include <algorithm>   

using namespace std;

int main() {

    int test;
    cin >> test;

    for (int i = 0; i < test; i++) {

        int semi;
        cin >> semi;

        int max = 0;
        int index;
        vector<int> vec;

        for (int i = 1; i <= semi; i++) {
            int n;
            cin >> n;
            vec.push_back(n);

            if (n > max) {
                max = n;     
                index = i;   
            }
        }

        sort(vec.begin(), vec.end(), greater<int>());

        int cnt = 0;
        int sum = 0;

        for (int i = 0; i < vec.size(); i++) {
            if (vec[0] == vec[1]) {     
                cnt++;           
            }
            sum += vec[i];
        }
        if (cnt == 0) {                
            if (sum - vec[0] < vec[0]) {  
                cout << "majority winner " << index << "\n";
            }
            else if (sum - vec[0] >= vec[0]) { 
                cout << "minority winner " << index << "\n";
            }
        }
        else if (cnt >= 1) {          
            cout << "no winner\n";
        }

    }
    return 0;
}
