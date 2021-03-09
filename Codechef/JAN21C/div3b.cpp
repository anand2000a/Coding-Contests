#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (; t > 0; t--)
    {
        map<string, char> character_mapping;
        character_mapping["0000"] = 'a';
        character_mapping["0001"] = 'b';
        character_mapping["0010"] = 'c';
        character_mapping["0011"] = 'd';
        character_mapping["0100"] = 'e';
        character_mapping["0101"] = 'f';
        character_mapping["0110"] = 'g';
        character_mapping["0111"] = 'h';
        character_mapping["1000"] = 'i';
        character_mapping["1001"] = 'j';
        character_mapping["1010"] = 'k';
        character_mapping["1011"] = 'l';
        character_mapping["1100"] = 'm';
        character_mapping["1101"] = 'n';
        character_mapping["1110"] = 'o';
        character_mapping["1111"] = 'p';
        int n;
        string s;
        cin >> n >> s;
        int i = 0;
        while (i < n)
        {
            string str(s.begin() + i, s.begin() + i + 4);
            i += 4;
            cout << character_mapping[str];
        }
        cout << endl;
    }
    return 0;
}
