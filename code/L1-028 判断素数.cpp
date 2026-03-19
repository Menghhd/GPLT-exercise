#include<bits/stdc++.h>
using namespace std;
bool prime(long long x)
{
    if(x < 2) return false;
    if(x == 2) return true;
    for(long long i = 2; i * i <= x; i ++)
    {
        if(x % i == 0) return false;
    }
    return true;
} 
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        int n;
        cin >> n;
        if(prime(n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}