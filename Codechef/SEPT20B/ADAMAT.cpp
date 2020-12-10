#include <bits/stdc++.h>
#define f
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, j;
        cin >> n;
        int arr[n][n], dmat[n][n];
        int k = 1;
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                dmat[i][j] = k;
                k++;
            }
        int flag = 0;
        int count = 0;
        int m = n - 1;
        while (m)
        {
            int op = 0;
            for (i = 0; i < m; i++)
            {
                if (flag == 0)
                {
                    if (dmat[m][i] != arr[m][i])
                    {
                        flag = 1;
                        count++;
                        op = 1;
                    }
                }
                if (flag == 1)
                {
                    if (dmat[m][i] == arr[m][i])
                    {
                        flag = 0;
                        count++;
                        op = 1;
                    }
                }
                if (op)
                    break;
            }
            m--;
        }
        cout << count << "\n";
    }
    return 0;
}