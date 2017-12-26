/*
 * Chapter 7
 *
 */

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include<cstdio>
#include<algorithm>
using namespace std;


/*
 * void print_permutation(int n, int *A, int cur) {
 *     if (cur == n) {
 *         for (int i = 0; i < n; i++)
 *             printf("%d", A[i]);
 *         printf("\n");
 *     } else {
 *         for (int i = 1; i <= n; i++)
 *         {
 *             int ok = 1;
 *             for (int j = 0; j < cur; j++)
 *                 if (A[j] == i) ok = 0;
 *             if (ok) {
 *                 A[cur] = i;
 *                 print_permutation(n, A, cur+1);
 *             }
 *         }
 *     }
 * }
 * void print_permutation_2(int n, int *P, int *A, int cur) {
 *     if (cur == n) {
 *        for (int i = 0; i < n; i++)
 *             printf("%d", A[i]);
 *         printf("\n");
 *     } else {
 *         for (int i = 0; i < n; i++)
 *         {
 *             int ok = 1;
 *             for(int j = 0; j < cur; j++)
 *                 if (A[j] == P[i]) ok = 0;
 *             if (ok) {
 *                 A[cur] = P[i];
 *                 print_permutation_2(n, P, A, cur+1);
 *             }
 *         }
 *     }
 * }
 */

void print_permutation_3(int n, int *P, int *A, int cur) {
    if (cur == n) {
       for (int i = 0; i < n; i++)
            printf("%d", A[i]);
        printf("\n");
    } else {
        for (int i = 0; i < n; i++){
            if(!i || P[i] != P[i-1]) {
                int c1 = 0, c2 = 0;
                for(int j = 0; j < cur; j++)
                    if (A[j] == P[i]) c1++;
                for(int j = 0; j < n; j++)
                    if(P[i] == P[j]) c2++;
                if(c1 < c2) {
                    A[cur] = P[i];
                    print_permutation_3(n, P, A, cur + 1);
                }
            }
        }
    }
}

BOOST_AUTO_TEST_CASE( page185 )
{
    int A[4];
    int P[4] = {1,2,2,4};
    sort(P, P+4);
    print_permutation_3(4, P, A, 0);
}
