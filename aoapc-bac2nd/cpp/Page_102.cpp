/*************************************************************************
 > File Name: Page_102.cpp
 > Author: 
 > Mail: 
 > Created Time: 2016年04月14日 星期四 20时50分25秒
 ************************************************************************/

#include<iostream>
using namespace std;


void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

int main()
{
    int a = 3, b = 4;
    swap(a, b);
    cout << a << " " << b << "\n";
    return 0;
}
