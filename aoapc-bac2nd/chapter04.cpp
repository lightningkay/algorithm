/*
 * Chapter 4
 *
 */

#define BOOST_TEST_MAIN
#define BOOST_TEST_DYN_LINK

#include <boost/test/unit_test.hpp>
#include<stdio.h>

void swap(int a, int b)
{
    int t = a;
    a = b;
    b = t;
}

void swap(int * a, int * b)
{
    int t = * a;
    * a = * b;
    * b = t;
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
