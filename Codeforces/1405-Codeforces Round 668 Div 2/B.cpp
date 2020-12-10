#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int arr[n];
		int i;
		for (i = 0; i < n; i++)
			cin >> arr[i];
		long long int cost = 0;
		for (i = 0; i < n; i++)
		{
			int flag = -1;
			if (arr[i] > 0)
			{
				// cout << "hey";
				int j = i + 1;
				while (j < n)
				{
					if (arr[j] < 0)
						break;
					j++;
				}
				if (j < n)
				{
					int res = min(abs(arr[i]), abs(arr[j]));
					//				cout<<res<<" ";

					arr[i] -= res;
					arr[j] += res;
				}
				// cout << "\n";
				// for (i = 0; i < n; i++)
				// 	cout << arr[i] << " ";
				if (arr[i] > 0 && j < n)
					i--;
				if (j == n)
					flag = 0;
			}
			if (flag == 0)
				break;
		}
		//		cout<<"\n";
		//		for(i=0;i<n;i++)
		//		cout<<arr[i]<<" ";
		for (i = 0; i < n; i++)
			if (arr[i] > 0)
				cost += arr[i];
		cout << cost << "\n";
	}
}
/*
7
4
-1 1 1 -1
4
-3 5 -3 1
2
1 -1
4
-3 2 -3 4
7
-5 7 -6 -4 17 -13 4
6
-1000000000 -1000000000 -1000000000 1000000000 1000000000 1000000000
1
0

*/