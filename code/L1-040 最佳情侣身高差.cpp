#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t --)
    {
        char gender;
        double h;
        cin >> gender >> h;
        if(gender == 'M') cout << fixed << setprecision(2) << h / 1.09 << endl;
        else cout << fixed << setprecision(2) << h * 1.09 << endl;
    }
    return 0;
}