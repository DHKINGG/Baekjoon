#include <iostream>
#include <vector>
#include <algorithm>    // sort, greater
 
using namespace std;
 
int main() {
 
    int test;
    cin>>test;
 
    for(int i=0; i<test; i++){
 
        int semi;
        cin>>semi;
 
        int max=0;
        int index;
        vector<int> vec;
 
        for(int i=1; i<=semi; i++){
            int n;
            cin>>n;
            vec.push_back(n);
 
            if(n>max){
                max=n;      // 최다 득표자
                index=i;    // 최다 득표자 배열 위치
            }
        }
 
        sort(vec.begin(), vec.end(), greater<int> ()); // 내림차순
        // ex) input 15, 16, 19, 45 grater-> 45, 19, 16, 15
        
        int cnt=0;
        int sum=0;
 
        for(int i=0; i<vec.size(); i++){
            if(vec[0]==vec[1]){     // 최다 득표자가 1명이 아니라 2명 이상일때,
            //ex) 45, 45, 16, 15
            //    0    1   2   3
                cnt++;              // 카운트
            }
            sum+=vec[i];
        }
        if(cnt==0){                 // 최다 득표자가 1명일때,
            if(sum-vec[0]<vec[0]){  // vec[0] = 최다 득표수
                                    // 최다 득표 수가 총 득표 수의 절반 이상을 차지할때,
                cout<<"majority winner "<<index<<"\n";
            }
            else if(sum-vec[0]>=vec[0]){ // 최다 득표 수가 총 득표수의 절반 이하일때,
                cout<<"minority winner "<<index<<"\n";
            }
        }
        else if(cnt>=1){            // 최다 득표자가 2명 이상일때,
            cout<<"no winner\n";     
        }
 
    }
    return 0;
}
