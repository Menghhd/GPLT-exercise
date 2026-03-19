#include<bits/stdc++.h>
using namespace std;
int main()
{
    string line, s1, s2;
    getline(cin, line);
    int pos = 0;
    for(int i = 0; i < line.size(); i ++)
    {
        if(line[i] == ' ') 
        {
            pos = i;
            break;
        }
    }
    s1 = line.substr(0, pos); 
    s2 = line.substr(pos + 1);
    int n1 = 0, n2 = 0;
    int len1 = s1.size(), len2 = s2.size();
    for(int i = 0; i < len1; i ++)
    {
        if(!(s1[i] >= '0' && s1[i] <= '9')) 
        {
            n1 = -1;
            break;
        }
        else
        {
            n1 *= 10;
            n1 += int(s1[i] - '0');
        }
    }
    for(int i = 0; i < len2; i ++)
    {
        if(!(s2[i] >= '0' && s2[i] <= '9')) 
        {
            n2 = -1;
            break;
        }
        else
        {
            n2 *= 10;
            n2 += int(s2[i] - '0');
        }
    }
    if(n1 < 1 || n1 > 1000) n1 = -1;
    if(n2 < 1 || n2 > 1000) n2 = -1;
    if(n1 >= 0 && n2 >= 0) cout << n1 << " + " << n2 << " = " << n1 + n2;
    else if(n1 >= 0 && n2 < 0) cout << n1 << " + ? = ?" ;
    else if(n1 < 0 && n2 >= 0) cout << "? + "<< n2 << " = ?" ;
    else cout << "? + ? = ?";
    return 0;
}   