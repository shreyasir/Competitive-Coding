#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int A[5] = {1,
                2,
                3,
                4,
                5};

    fun(A, 5);
    return 0;
}

void fun(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d", A[i]);
}