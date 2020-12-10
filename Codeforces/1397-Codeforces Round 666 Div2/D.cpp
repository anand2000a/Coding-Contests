//code by - anand2000

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
		int maxi = -1;
		long long sum = 0;
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
			sum += arr[i];
			maxi = max(maxi, arr[i]);
		}
		if (maxi > (sum - maxi))
			cout << "T\n";
		else if (sum % 2 == 0)
			cout << "HL\n";
		else
			cout << "T\n";
	}

	return 0;
}
