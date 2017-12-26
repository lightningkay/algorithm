/*
 * Chapter 1
 *
 */

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <stdio.h>
#include <math.h>

void swap(int * a, int * b)
{
    int t = * a;
    * a = * b;
    * b = t;
}

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

BOOST_AUTO_TEST_CASE( page01 )
{
    // 测试整数除法
    printf("%d\n", 8 / 5);
    // 测试浮点数除法
    printf("%.1f", 8.0 / 5.0);
}

BOOST_AUTO_TEST_CASE( page02 )
{
    // 竞赛编程整型输入输出
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a + b);

}

BOOST_AUTO_TEST_CASE( page04 )
{
    // 输入一个三位数 输出数字每一位的数字
    int n;
    scanf("%d", &n);
    printf("%d%d%d", n % 10, n / 10 % 10, n / 100 % 10);
}

BOOST_AUTO_TEST_CASE( page07 )
{
    // 求半径r、高h，圆柱体表面积
    const double pi = acos(-1.0);
    double r, h, s1, s2, s;
    scanf("%lf%lf", &r, &h);
    s1 = pi * r * r;
    s2 = 2 * pi * r  * h;
    s = s1*2.0 + s2;
    printf("Area = %.3f\n", s);
}

BOOST_AUTO_TEST_CASE( page07_01 )
{
    // 输入一个三位数 输出各个位数字的和
    int n, m;
    scanf("%d", &n);
    m = n % 10 * 100 + n / 10 % 10 * 10 + n / 100 % 10;
    printf("%3d", m);
}

BOOST_AUTO_TEST_CASE( page08 )
{
    // 变量数值交换 (使用一个变量交换)
    int a, b, t;
    scanf("%d%d", &a, &b);
    t = a;
    a = b;
    b = t;
    printf("%d %d", a, b);
}

BOOST_AUTO_TEST_CASE( page08_01 )
{
    // 变量数值交换 (不使用变量)
    int a, b;
    scanf("%d%d", &a, &b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("%d %d", a, b);
}

BOOST_AUTO_TEST_CASE( page10 )
{
    int a, b, n, m;
    scanf("%d%d", &n, &m);
    a = (4 * n - m) / 2;
    b = n - a;
    if(m % 2 == 1 || a < 0 || b < 0)
        printf("No answer!\n");
    else
        printf("%d %d\n", a, b);
}

BOOST_AUTO_TEST_CASE( page11 )
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);
    if( a <= b && a<= c && b <=c )
         printf("%d %d %d", a, b, c);
    else if( a <= c && a<= b && c <= b )
         printf("%d %d %d", a, c, b);
    else if( b <= a && b<= c && a <=c )
         printf("%d %d %d", b, a, c);
    else if( b <= c && b<= a && c <=a )
         printf("%d %d %d", b, c, a);
    else if( c <= b && c<= b && b <=a )
         printf("%d %d %d", c, b, a);
    else if( c <= a && c<= b && a <=b )
         printf("%d %d %d", c, a, b);
}

BOOST_AUTO_TEST_CASE( page11_01 )
{
    int a, b, c, t;

    scanf("%d%d%d", &a, &b, &c);

    if(a > b) {t = a; a = b; b = t;}
    if(a > c) {t = a; a = c; c = t;}
    if(b > c) {t = b; b = c; c = t;}

    printf("%d %d %d", a, b, c);
}

BOOST_AUTO_TEST_CASE( page16 )
{
    int i = 6000000;
    while(i>0)
    {
        i++;
    }
    printf("%d", i);
    printf("%d", i-1);
}

BOOST_AUTO_TEST_CASE( page16_01 )
{
    double i = 0.1;
    for(int j = 0; j < 20000; j++)
    {
        i/=1000000000;
       if(j%1000==0)
        printf("%e\n", i);
    }
}

BOOST_AUTO_TEST_CASE( page65 )
{
    int a = 3, b = 4;
    swap(a, b);
    printf("%d %d", a, b);
}

BOOST_AUTO_TEST_CASE( page69 )
{
    int a = 3, b = 4;
    swap(&a, &b);
    printf("%d %d\n", a, b);
}

