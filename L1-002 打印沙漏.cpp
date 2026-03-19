#include<bits/stdc++.h>
using namespace std;
void print(int h,char c)
{
    for(int i = 0; i < h; i ++)
    {
        for(int j = 0; j < i; j ++) cout << " ";
        for(int j = h * 2 - 1 - i * 2; j > 0; j --) cout << c;
        cout << endl;
    }
    for(int i = 1; i < h; i ++)
    {   
        for(int j = h - i - 1; j > 0; j --) cout << " ";
        for(int j = 0; j < i * 2 + 1;j ++) cout << c;
        cout << endl;
    }
}
int main()
{
    int n;
    char c;
    cin >> n >> c;
    int h = 0;
    while(h * h * 2 < n + 1)
    {
        h ++;
    }
    if(h * h * 2 > n + 1) h -= 1;
    print(h, c);
    cout << n - h * h * 2 + 1 << endl;
    return 0;
}