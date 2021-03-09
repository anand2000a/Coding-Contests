#include <bits/stdc++.h>
using namespace std;
#define inti long long
void solve_subtask1(vector<vector<inti>> ants)
{
    inti postive = 0, negative = 0;
    for (auto vec : ants)
        for (auto num : vec)
        {
            if (num > 0)
                postive++;
            else
                negative++;
        }
    cout << postive * negative << endl;
}
int main()
{
    inti t;
    cin >> t;
    for (; t > 0; t--)
    {
        inti n;
        cin >> n;
        inti i, j;
        vector<vector<inti>> ants;
        for (i = 0; i < n; i++)
        {
            inti m;
            cin >> m;
            vector<inti> line;
            for (j = 0; j < m; j++)
            {
                inti temp;
                cin >> temp;
                line.push_back(temp);
            }
            ants.push_back(line);
            line.clear();
        }
        if (n == 1)
            solve_subtask1(ants);
        ants.clear();
    }
}