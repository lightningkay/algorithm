/*************************************************************************
 > File Name: Page_106.cpp
 > Author: 
 > Mail: 
 > Created Time: 2016年04月14日 星期四 21时24分05秒
 ************************************************************************/

#include<iostream>
using namespace std;
template<typename T>
T sum(T * begin, T * end)
{
    T ans = 0;
    for(T * p = begin;p != end; p++)
    {
        ans += *p;
    }
    return ans;
}

int main()
{
    double a[] = {1.1, 2.1, 3.1, 4.4};
    cout << sum(a, a+3) << "\n";
    return 0;
}
