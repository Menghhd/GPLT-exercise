#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin.ignore();
    getline(cin, s);
    int len = s.size();
    int col = (len + (n - 1)) / n;
    char mp[n][col];
    memset(mp, ' ', sizeof(mp) / sizeof(char));
    int idx = 0;
    for(int j = col - 1; j >= 0; j --)
    {
        for(int i = 0; i < n; i ++)
        {
            if(idx < len) mp[i][j] = s[idx ++];
            else s[idx ++] = ' ';
            // cout << i << " " << j << " " << mp[i][j] << endl;
        }
    }
    for(int i = 0; i < n; i ++)
    {
        for(int j = 0; j < col; j ++)
        {
            cout << mp[i][j];
        }
        cout << endl;
    }
    return 0;
}