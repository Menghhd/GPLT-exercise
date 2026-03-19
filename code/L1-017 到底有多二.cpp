#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    int len = s.size();
    double n1 = 1, n2 = 1;
    int num_two = 0;
    for(int i = 0; i < len; i ++)
    {
        if(s[i] == '2') num_two ++;
    }
    if(int(s[len - 1] - '0') % 2 == 0) n2 = 2;
    if(s[0] == '-')
    {
        len -= 1;
        n1 = 1.5;
    }
    cout << fixed << setprecision(2) << double(num_two) / double(len) * n2 * n1 * 100 << "%";
    return 0;
}