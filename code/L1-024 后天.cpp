#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int res = (n + 2) % 7;
    if(res == 0) res = 7;
    cout << res;
    return 0;
}