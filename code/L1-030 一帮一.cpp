#include<bits/stdc++.h>
using namespace std;
struct stu
{
    string name;
    int gender;
    int vis = 0;
};
int main()
{
    stu st[55];
    int n;
    cin >> n;
    int idxb = n - 1, idxg = n - 1;
    for(int i = 0; i < n; i ++) cin >> st[i].gender >> st[i].name;
    for(int i = 0; i < n; i ++) 
    {
        if(st[i].vis == 0)
        {
            if(st[i].gender == 1)
            {
                while(idxg >= 0 && (st[idxg].gender == 1 || st[idxg].vis == 1)) idxg --;
                st[idxg].vis = 1;
                st[i].vis = 1;
                cout << st[i].name << " " << st[idxg].name << endl;
            }
            if(st[i].gender == 0)
            {
                while(idxb >= 0 && (st[idxb].gender == 0 || st[idxb].vis == 1)) idxb --;
                st[idxb].vis = 1;
                st[i].vis = 1;
                cout << st[i].name << " " << st[idxb].name << endl;
            }
        }
    }
    return 0;
}