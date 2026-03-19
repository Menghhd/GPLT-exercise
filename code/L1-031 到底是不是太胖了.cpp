#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n --)
    {
        int h, w;
        cin >> h >> w;
        double wan = 0.9 * (h - 100);
        if(abs(w / 2.0 - wan) < wan * 0.1) cout << "You are wan mei!" << endl;
        else if(w / 2.0 > wan) cout << "You are tai pang le!" << endl;
        else cout << "You are tai shou le!" << endl;
    }
}