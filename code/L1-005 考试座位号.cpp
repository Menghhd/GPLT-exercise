#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string loc[n + 1];
    int test[n + 1];
    for(int i = 0; i < n; i ++)
    {
        string s;
        int a, b;
        cin >> s >> a >> b;
        loc[a] = s;
        test[a] = b;
    }
    int t;
    cin >> t;
    while(t --)
    {
        int x;
        cin >> x;
        cout << loc[x] << " " << test[x] << endl;
    }
    return 0;
}