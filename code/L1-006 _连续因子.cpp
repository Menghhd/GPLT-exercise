#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> num;
    int n;
    cin >> n;
    for(int i = 2; i <= n; i ++)
    {
        if(n % i == 0) num.push_back(i);
    }
    int len = num.size();
    int begin = 0;
    if(len == 1) begin = num[0];
    int max = 1, res = 1;
    int i = 1;
    for(; i < len; i ++)
    {
        if(num[i] == num[i - 1] + 1) res ++;
        else
        {
            if(max < res)
            {
                max = res;
                begin = num[i - res];
            }
            res = 1;
        }
    }
    if(max < res) 
    {
        max = res;
        begin = num[i - res];
    }
    cout << max << endl;
    for(int i = begin; i < begin + max; i ++)
    {
        if(i != begin) cout << "*";
        cout << i;
    }
    return 0;
}