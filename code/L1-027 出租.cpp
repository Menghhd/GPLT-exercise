#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int num[10] = {0};
    
    for(int i = 0; i < 11; i ++)
    {
        num[int(s[i] - '0')] = 1;
    } 
    int mp[10] = {0};
    int idx = 0;
    cout << "int[] arr = new int[]{" ;
    for(int i = 9; i >= 0; i --)
    {
        if(num[i] == 1) 
        {
            mp[i] = idx;
            if(idx != 0) cout << "," << i;
            else cout << i;
            idx ++;
        }
    }
    cout << "};" << endl << "int[] index = new int[]{";
    for(int i = 0; i < 11; i ++)
    {
        if(i != 0) cout << "," << mp[int(s[i] - '0')];
        else cout << mp[int(s[i] - '0')];
    }
    cout << "};";
    return 0;
}