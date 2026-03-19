#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h, m;
    scanf("%d:%d", &h, &m);
    int hh = h;
    if(m > 0) hh += 1;
    if(hh < 13) cout << "Only " << setw(2) << setfill('0') << h << ":" << setw(2) << setfill('0') << m <<".  Too early to Dang.";
    else
    {
        for(int i = 0; i < hh - 12; i ++) cout << "Dang";
    }
    return 0;
}