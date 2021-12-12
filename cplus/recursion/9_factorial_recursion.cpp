// n! = 1*2*3*-----*(n-1)*n
#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}

int main()
{
    int r;
    r = fact(30);
    printf("%d\n", r);
    return 0;
}