#include<bits/stdc++.h>
using namespace std;
int gcd(int x, int y)
{
    x = abs(x);
    y = abs(y);
    while(y != 0)
    {
        int c = x % y;
        x = y;
        y = c;
    }
    return x;
}
pair<int, int> aDD(pair<int,int> num1, pair<int, int>num2)
{
    pair<int, int> res;
    res.second = num1.second * num2.second;
    res.first = num1.first * num2.second + num2.first * num1.second;
    int di = gcd(res.first, res.second);//这里不能两次除以gcd 因为已经发生变化
    res.second /= di;
    res.first /= di;
    return res;
}
void print(pair<int, int> res)
{
    int sign = 0;
    if(res.first < 0)
    {
        sign = -1;
        res.first = -res.first;
    }
    if(res.first == 0)
    {
        cout << "0";
        return;
    }
    if(sign == -1) cout << "-";
    int z = res.first / res.second;
    if(z != 0) cout << z;
    if(res.first % res.second != 0) 
    {
        if(z != 0) cout << " "; //空格实际上是因为后面的分数产生的 不应该跟随正数
        res.first = abs(res.first % res.second);
        cout << res.first << "/" << res.second << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    int n1, n2;
    pair<int, int> out = {0, 1};
    while(n --)
    {
        char c;
        cin >> n1 >> c >> n2;
        pair<int, int> addnum;
        addnum.first = n1;
        addnum.second = n2;
        out = aDD(out, addnum);
    }
    print(out);
    return 0;
}