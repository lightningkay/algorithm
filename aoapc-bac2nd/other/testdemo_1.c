#include<stdio.h>
#include<limits.h>

int main()
{
    printf("%ld\n", sizeof(long long));
    printf("%ld\n", sizeof(long));
    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(float));
    printf("%ld\n", sizeof(double));
    printf("%ld\n", sizeof(char));

    int a[10];
    printf("%ld\n", sizeof(a));
    printf("%ld\n ", sizeof(&a));
    printf("%ld %ld %ld %ld\n", a, a+1, &a, &a+1);
    return 0;
}
