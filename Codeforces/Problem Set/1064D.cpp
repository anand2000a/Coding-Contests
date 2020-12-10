//code by - anand2000

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define ll long long int
#define vll vector<ll>
#define vii vector<int>
#define vpll vector<pair<ll, ll>>
#define pii pair<int, int>
#define pb push_back
#define mp make_pair
#define fr(i, a, b) for (i = a; i < b; i++)
#define fr1(i, a, b) for (i = a; i >= b; i--)
#define inf LLONG_MAX
// #define first fi
// #define second se
#define ppii pair<pii, pii>
/*-------Code Goes Here-------*/

char maze[2001][2001];
int visited[2001][2001];
int max_left, max_right;
int row, col, start_x, start_y;
bool isVal(int x, int y)
{
    if (x > 0 && x <= row && y > 0 && y <= col && maze[x][y] == '.' && visited[x][y] == false)
        return true;
    return false;
}

void solve()
{
    priority_queue<ppii, vector<ppii>, greater<ppii>> pq;
    pq.push({{0, 0}, {start_x, start_y}});
    visited[start_x][start_y] = true;
    int ans = 0;
    while (!pq.empty())
    {
        int l = pq.top().first.first;
        int r = pq.top().first.second;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        // cout << l << " " << r << " " << x << " " << y << " " << maze[x][y] << "\n";
        pq.pop();
        ans++;
        if (l + 1 <= max_left)
            if (isVal(x, y - 1))
            {
                // cout << "left\n";
                pq.push({{l + 1, r}, {x, y - 1}});
                visited[x][y - 1] = true;
            }
        if (r + 1 <= max_right)
            if (isVal(x, y + 1))
            {
                // cout << "right\n";
                pq.push({{l, r + 1}, {x, y + 1}});
                visited[x][y + 1] = true;
            }
        if (isVal(x + 1, y))
        {
            // cout << "top\n";
            pq.push({{l, r}, {x + 1, y}});
            visited[x + 1][y] = true;
        }
        if (isVal(x - 1, y))
        {
            // cout << "down\n";
            pq.push({{l, r}, {x - 1, y}});
            visited[x - 1][y] = true;
        }
        // cout << l << " " << r << " " << x << " " << y << " " << maze[x][y] << "\n";
    }
    cout << ans;
}
int main()

{
    fast;
    ll t;
    t = 1;
    // cin >> t;
    while (t--)
    {
        int i, j;
        fr(i, 0, 2001)
            fr(j, 0, 2001)
                maze[i][j] = '*',
                visited[i][j] = false;
        cin >> row >> col;
        cin >> start_x >> start_y;
        cin >> max_left >> max_right;
        fr(i, 1, row + 1)
        {
            fr(j, 1, col + 1)
            {
                cin >> maze[i][j];
            }
        }
        solve();
    }
    return 0;
}
