#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    cout << n << "/";
    if(m == 0) cout << "0=Error";
    else if(m < 0) cout << "(" << m << ")=" << fixed << setprecision(2) << 1.0 * n / m;
    else cout << m << "=" << fixed << setprecision(2) << 1.0 * n / m;
    return 0;
}