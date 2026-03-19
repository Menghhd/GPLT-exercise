#include<bits/stdc++.h>
using namespace std;
int main()
{
    int blog[1005] = {0};
    int n;
    cin >> n;
    while(n --)
    {
        int k;
        cin >> k;
        while(k --)
        {
            int x;
            cin >> x;
            blog[x] ++;
        }
    }
    int time = 0, loc = 0;
    for(int i = 0; i < 1005; i ++)
    {
        if(blog[i] >= time) 
        {
            time = blog[i];
            loc = i;
        }
    }
    cout << loc << " " << time;
    return 0;
}