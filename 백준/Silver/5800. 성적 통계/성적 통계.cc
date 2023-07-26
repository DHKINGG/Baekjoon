#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include <cmath>

using namespace std;



int main()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int student, max_gap = 0;
		cin >> student;
		vector<int>arr;
		for (int j = 0; j < student; j++)
		{
			int score, gap = 0;
			cin >> score;
			arr.push_back(score);
		}
		sort(arr.begin(), arr.end());
		for (int j = 0; j < student; j++)
		{
			int gap = 0;
			if (j >= 1)
			{
				gap = arr[j] - arr[j - 1];
				if (gap > max_gap)
				{
					max_gap = gap;
				}
			}
		}
		cout << "Class " << i + 1 << "\n";
		cout << "Max " << arr.back() << ", Min " << arr.front() << ", Largest gap " << max_gap << "\n";
	}

	return 0;
}