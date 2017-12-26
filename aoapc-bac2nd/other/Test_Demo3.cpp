/*************************************************************************
 > File Name: Test_Demo3.cpp
 > Author: 
 > Mail: 
 > Created Time: 2016年04月20日 星期三 15时21分58秒
 ************************************************************************/

#include<cstdio>
using namespace std;

void print_set(int n, int *A, int cur)
{
    for(int i = 0; i < cur; i++){
        printf("%d", A[i]);
    }
    printf("\n");
    int s = cur? A[cur-1]+1: 0;
    for(int i = s; i < n; i++){
        A[cur] = i;
        print_set(n, A, cur + 1);
    }
}

void print_set2(int n, int *B, int cur)
{
    if(cur == n){
        for(int i = 0; i < cur; i++)
            if(B[i]) printf("%d", i);
        printf("\n");
        return;
    }

    B[cur] = 0;
    print_set2(n, B, cur + 1);
    B[cur] = 1;
    print_set2(n, B, cur + 1);
}

int main()
{
    int A[] = {0, 1, 2, 3, 4};
    print_set(5, A, 0);

    printf("\n\n");
    
    int B[5] = {0, 0, 0, 0, 0};
    print_set2(5, B, 0);
}
