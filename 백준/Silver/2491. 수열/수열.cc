#include<algorithm>
#include<iostream>
#include<vector>
#include<vector>
#include<tuple>
#include<queue>

using namespace std;


int n;
vector<int> v;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int cnt = 2;
    int increase = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] <= v[i + 1])
        {
            
            increase++;
        }
        else
        {
            if (cnt < increase)
                cnt = increase;
            increase = 1;
        }
    }
    if (cnt < increase)
        cnt = increase;

    int decrease = 1;

    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] >= v[i + 1])
        {
           
            decrease++;
        }
        else
        {
            if (cnt < decrease)
                cnt = decrease;
            decrease = 1;
        }
    }
    if (cnt < decrease)
        cnt = decrease;

    if (v.size() == 1) cout << "1\n";

    else cout << cnt;

    return 0;
}