#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> s;
    n = s.size();
    int i;
    int up = 0;
    for (i = 0; i < n; i++)
        if (isupper(s[i]))
            up++;
    if (up > n / 2)
    {
        for (i = 0; i < n; i++)
            cout << char(toupper(s[i]));
    }
    else
    {
        for (i = 0; i < n; i++)
            cout << char(tolower(s[i]));
    }
}