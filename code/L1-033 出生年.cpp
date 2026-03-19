#include<bits/stdc++.h>
using namespace std;
int dif(int x)
{
    int num[10] = {0};
    if(x < 1000) num[0] = 1;
    while(x)
    {
        num[x % 10] = 1;
        x /= 10;
    }
    int sum = 0;
    for(int i = 0; i < 10; i ++) sum += num[i];
    return sum;
}
int main()
{
    int year, aim;
    cin >> year >> aim;
    for(int i = 0; i < 10000; i ++)
    {
        if(dif(year + i) == aim) 
        {
            cout << i << " " << setw(4) << setfill('0') << year + i;
            break;
        }
    }   
    return 0;
}