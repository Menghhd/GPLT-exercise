#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num[10] = {1,2,6,24,120,720,5040,40320,362880,3628800};
    int n;
    cin >> n;
    long long ans = 0;
    for(int i = 0; i < n; i ++) ans += num[i];
    cout << ans;
    return 0;
}