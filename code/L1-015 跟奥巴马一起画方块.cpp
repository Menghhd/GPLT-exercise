#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    char c;
    cin >> n >> c;
    int h = int(n / 2.0 + 0.5);
    for(int i = 0; i < h; i ++)
    {
        for(int j = 0; j < n; j ++)
        {
            cout << c;
        }
        cout << endl;
    }
    return 0;
}