#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    getline(cin, a);
    getline(cin, b);
    int vis[1000] = {0};
    int lena = a.size(), lenb = b.size();
    for(int i = 0; i < lenb; i ++)
    {
        vis[int(b[i])] = 1;
    }
    for(int i = 0 ;i < lena; i ++)
    {
        if(vis[int(a[i])]) continue;
        else cout << a[i];
    }
    return 0;
}