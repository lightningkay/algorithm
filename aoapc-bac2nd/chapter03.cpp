/*
 * Charpter 3
 *
 */

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>
#include <stdio.h>

#define maxn 1010
int a[maxn];

BOOST_AUTO_TEST_CASE( page37 )
{
    int x, n = 0;

    while(scanf("%d", &x)==1)
        a[n++] = x;
    for(int i = n-1; i >= 1; i--)
        printf("%d ", a[i]);
    printf("%d\n", a[0]);
}

BOOST_AUTO_TEST_CASE( page39 )
{
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    scanf("%d%d", &n, &k);
    for(int i = 1; i <= k; i++)
    {
        int j = 0;
         while(j<n)
         {
             if((j+1)%i == 0)
                 a[j] = !a[j];
             j++;
         }
    }
    for(int i = 0; i <= n-1; i++)
    {
        if(a[i]!=0)
        {
            if(first)
                first = 0;
            else
                printf(" ");
            printf("%d", i+1);
        }
    }
    printf("\n");
}

BOOST_AUTO_TEST_CASE( page41 )
{
    int a[maxn][maxn];
    int n, x, y, tot = 0;
    scanf("%d", &n);
    tot = a[x=0][y=n-1] = 1;
    while(tot < n*n)
    {
        while(x+1 < n && !a[x+1][y]) a[++x][y] = ++tot;
        while(y-1 >= 0 && !a[x][y-1]) a[x][--y] = ++tot;
        while(x-1 >= 0 && !a[x-1][y]) a[--x][y] = ++tot;
        while(y+1 < n && !a[x][y+1]) a[x][++y] = ++tot;
    }
    for(int i = 0; i < n; i++)
    {
        int first = 1;
        for(int j = 0; j < n; j++)
        {
            if(first)
                first = 0;
            else
                printf(" ");
            printf("%-4d", a[i][j]);
        }
        printf("\n");
    }
}

BOOST_AUTO_TEST_CASE( page42 )
{
    int count = 0;
    char s[20], buf[99];
    scanf("%s", s);
    for(int abc = 111; abc <= 999; abc++)
        for(int de = 11; de <= 99; de ++)
        {
            int x = abc * (de%10), y = abc * (de/10), z = abc * de;
            sprintf(buf,"%d%d%d%d%d", abc, de, x, y, z);
            int ok = 1;
            for(int i = 0; i < strlen(buf); i++)
                if(strchr(s, buf[i]) == NULL) ok = 0;
            if(ok)
            {
                printf("<%d>\n", ++count);
                printf("%5d\nx%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
            }
        }
    printf("The number of solution = %d\n", count);
}

BOOST_AUTO_TEST_CASE( page47 )
{
    int c, q = 1;
    while((c = getchar())!= EOF)
    {
        if(c == '"')
        {
            printf("%s", q?"“":"”");
            q = !q;
        }
        else
            printf("%c", c);
    }
}
