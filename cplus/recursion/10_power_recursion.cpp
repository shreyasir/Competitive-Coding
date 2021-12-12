#include <stdio.h>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}

int power_simple(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return power_simple(m * m, n / 2);
    else
        return m * power_simple(m * m, (n - 1) / 2);
}

int main()
{
    int r;
    r = power(2, 3);
    printf("%d\n", r);
    return 0;
}