#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    int g = 0, p = 0, l = 0, t = 0;
    for(int i = 0; i < len; i ++)
    {
        if(s[i] == 'g' || s[i] == 'G') g ++;
        if(s[i] == 'p' || s[i] == 'P') p ++;
        if(s[i] == 'l' || s[i] == 'L') l ++;
        if(s[i] == 't' || s[i] == 'T') t ++;
    }
    while(g > 0 || p > 0 || l > 0 || t > 0)
    {
        if(g-- > 0) cout << "G";
        if(p-- > 0) cout << "P";
        if(l-- > 0) cout << "L";
        if(t-- > 0) cout << "T";
    }
    return 0;
}