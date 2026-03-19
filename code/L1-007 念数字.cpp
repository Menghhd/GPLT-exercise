#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    for(int i = 0; i < len; i ++)
    {
        if(i != 0) cout << " ";
        switch(s[i])
        {
            case '-': cout << "fu";break;
            case '1': cout << "yi";break;
            case '2': cout << "er";break;
            case '3': cout << "san";break;
            case '4': cout << "si";break;
            case '5': cout << "wu";break;
            case '6': cout << "liu";break;
            case '7': cout << "qi";break;
            case '8': cout << "ba";break;
            case '9': cout << "jiu";break;
            case '0': cout << "ling";break;
        }
    }
    return 0;
}