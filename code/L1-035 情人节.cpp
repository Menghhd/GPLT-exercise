#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int idx = 0;
    string two, four;
    while(1)
    {
        cin >> s;
        if(s == ".") break;
        idx ++;
        if(idx == 2) two = s;
        if(idx == 14) four = s;  
    }
    if(idx < 2) cout << "Momo... No one is for you ...";
    else if(idx < 14) cout << two << " is the only one for you...";
    else cout << two << " and " << four << " are inviting you to dinner..."; 
    return 0;
}