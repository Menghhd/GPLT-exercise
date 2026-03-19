#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int z = 0;
    int acc = 1;
    int q[17] ={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2}; 
    char x[11] = {'1','0','X','9','8','7','6','5','4','3','2'};
    while(n --)
    {
        string s;
        cin >> s;
        z = 0;
        for(int i = 0; i < 17; i ++) z += int(s[i] - '0') * q[i];
        z %= 11;
        switch(z)
        {
            case 0:
                if(s[17] != '1') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 1:
                if(s[17] != '0') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 2:
                if(s[17] != 'X') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 3:
                if(s[17] != '9') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 4:
                if(s[17] != '8') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 5:
                if(s[17] != '7') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 6:
                if(s[17] != '6') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 7:
                if(s[17] != '5') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 8:
                if(s[17] != '4') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 9:
                if(s[17] != '3') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
            case 10:
                if(s[17] != '2') 
                {
                    cout << s << endl;
                    acc = 0;
                }
                break;
        }
    }
    if(acc == 1) cout << "All passed" << endl;
    return 0;
}