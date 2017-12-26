/*
 * Chapter 2
 *
 */

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK

#define INF 1000000000

#include <boost/test/unit_test.hpp>
#include<stdio.h>
#include <math.h>

BOOST_AUTO_TEST_CASE( page20 )
{
    int num;
    for(int a = 1; a<=9; a++){
        for(int b = 0; b<=9; b++){
             num =a*1100+b*11;
             int m = floor(sqrt(num) + 0.5);
             if(m*m==num){
                 printf("%d\n", num);
             }
        }
    }
}

BOOST_AUTO_TEST_CASE( page21 )
{
    for(int x = 1 ; ;x++)
    {
        int n = x * x;

        if(n < 1000)
            continue;
        if(n > 9999)
            break;
        int hi = n / 100;
        int lo= n % 100;
        if(hi / 10 == hi % 10 && lo / 10 == lo % 10)
            printf("%d\n", n);
    }
}

BOOST_AUTO_TEST_CASE( page22 )
{
    int n, count = 0;

    scanf("%d", &n);

    while (n > 1){
        if(n % 2 == 1)
            n = 3 * n + 1;
        else
            n = n / 2;
        count++;
    }

    printf("%d\n", count);
}

BOOST_AUTO_TEST_CASE( page24 )
{
    double sum = 0;

    for(int i = 0; ; i++ )
    {
        double a = 1.0 / (2 * i + 1);
        if(i % 2 == 0)
            sum = sum + a;
        else 
            sum = sum - a;
        if(a< 0.000001)
            break;
    }

    printf("%.6f", sum);
}

BOOST_AUTO_TEST_CASE( page25 )
{
    int n, sum = 0;

    scanf("%d", &n);
    printf("%d\n", n);

    for (int i = 1; i <= n; i++)
    {
       int a = 1;
       for(int j = 1; j <=i; j++)
       {
           a = a * j;
       }

       sum = sum + a;
    }
    printf("%d\n", sum);
    printf("%d\n", sum%1000000);
}

BOOST_AUTO_TEST_CASE( page26 )
{
    const int MOD = 1000000;
    int n, S = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++ )
    {
        int factorial = 1;
        for(int j = 1; j <= i; j++)
        {
            factorial = factorial * j % MOD;
        }
        S = (factorial + S) % MOD;
    }

    printf("%d\n", S);
    printf("Time used = %.2f\n", (double)clock()/CLOCKS_PER_SEC);
}

BOOST_AUTO_TEST_CASE( page28 )
{
    int x, n = 0, min, max, s = 0;
    printf("%d %d\n", min, max);
    while(scanf("%d", &x)==1)
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n", min, max, (double)s/n);
}

BOOST_AUTO_TEST_CASE( page30 )
{
#ifdef LOCAL
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
#endif
    int x, n = 0, min = INF, max = -INF, s = 0;
    while(scanf("%d", &x)==1)
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    printf("%d %d %.3f\n", min, max, (double)s/n);
}

BOOST_AUTO_TEST_CASE( page31 )
{
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0;
    while(fscanf(fin, "%d", &x)==1)
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
    fclose(fin);
    fclose(fout);
}

BOOST_AUTO_TEST_CASE( page31_1 )
{
    FILE *fin, *fout;
    fin = fopen("data.in", "rb");
    fout = fopen("data.out", "wb");
    int x, n = 0, min = INF, max = -INF, s = 0;
    // fin = stdin;
    // fout = stdout;
    while(fscanf(fin, "%d", &x)==1)
    {
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        n++;
    }
    fprintf(fout, "%d %d %.3f\n", min, max, (double)s/n);
    fclose(fin);
    fclose(fout);
}

BOOST_AUTO_TEST_CASE( page32 )
{
    int x, n = 0, kase = 0;
    while(scanf("%d", &n)==1 && n)
    {
        int s = 0, min = INF, max = -INF;
        for(int i = 0; i < n; i++)
        {
        scanf("%d", &x);
        s += x;
        if(x < min) min = x;
        if(x > max) max = x;
        }
        if(kase)
            printf("\n");
        printf("case%d: %d %d %.3f\n", ++kase, min, max, (double)s/n);
    }
}

BOOST_AUTO_TEST_CASE( page34 )
{
    for(int i = 100; i <1000; i++)
    {
        int a, b, c, temp;
        a = i/100;
        b = i/10%10;
        c = i%10;
        temp = a*a*a + b*b*b + c*c*c;
        if(temp == i)
            printf("%d\n", temp);
    }
}

BOOST_AUTO_TEST_CASE( page34_1 )
{
    int a, b, c, kase = 0;
    freopen("data.in", "r", stdin);
    freopen("data.out", "w", stdout);
    while(scanf("%d%d%d", &a, &b, &c)==3) 
    {
        if(a >= 3 || b >=5 || c >= 7)
        {
            ++kase;
            break;
        }
        for(int i = 10; i <= 100; i++)
        {
            if(i % 3 == a && i % 5 == b && i % 7 == c)
            {
                ++kase;
                printf("Case %d: %d\n", kase, i);
                break;
            }
            else if(i == 100)
            {
                ++kase;
                printf("Case %d: No Answer!\n", kase);
            }
        }
    }
}
