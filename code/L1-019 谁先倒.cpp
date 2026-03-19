#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    int aa = a, bb = b;
    int n;
    cin >> n;
    int as,ah,bs,bh;
    while(n -- )
    {
        cin >> as >> ah >> bs >> bh;
        if(ah == as + bs && bh == as + bs) continue;
        else if(ah == as + bs) a --;
        else if(bh == as + bs) b --;
        if(a < 0 || b < 0) break; 
    }
    if(a < 0) cout << "A" << endl << bb - b;
    else cout << "B" << endl << aa - a;
    return 0;
}