#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    int cnt = 0;
    cin >> x >> y;
    for(int i = x; i <= y; i ++)
    {
        cout << setw(5) << right << i;
        
        cnt ++;
        if(cnt % 5 == 0)
        {
            cout << endl;
        }
    }
    if(cnt % 5 != 0) cout << endl;//注意这里
    cout << "Sum = " << (x + y) * (y - x + 1) / 2 << endl;
    return 0;
}