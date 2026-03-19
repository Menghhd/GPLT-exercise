#include<bits/stdc++.h>
using namespace std;
int main()
{
    int person[100005] = {0};
    int n;
    cin >> n;
    while(n --)
    {
        int k;
        cin >> k;
        if(k == 1) 
        {
            int x;
            cin >> x; 
            continue;
        }
        else 
        {
            int x;
            while(k --) 
            {
                cin >> x;
                person[x] = 1;
            }
        }
    }
    int q;
    cin >> q;
    int f = 0;
    while(q --)
    {
        int p;
        cin >> p;
        if(person[p] == 0) 
        {
            if(f == 0) cout << setw(5) << setfill('0') << p;
            else cout  << " " << setw(5) << setfill('0') << p ;
            f = 1;
            person[p] = 1;
        }
    }
    if(f == 0) cout << "No one is handsome";
    return 0;
}