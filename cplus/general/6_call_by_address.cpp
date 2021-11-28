#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int a, b;
    a = 10;
    b = 20;
    Swap(&a, &b);
    printf("%d, %d", a, b);
    return 0;
}

void Swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    printf("%d, %d", x, y, temp);
}