/*************************************************************************
 > File Name: Page_101.cpp
 > Author: 
 > Mail: 
 > Created Time: 2016年04月14日 星期四 20时36分36秒
 ************************************************************************/

#include<iostream>
#include<algorithm>
using namespace std;
const int maxn = 100 + 10;
int A[maxn];
int main()
{
    long long a, b;
    while(cin >> a >> b)
    {
        cout << min(a, b) << "\n";
    }
    return 0;
}

