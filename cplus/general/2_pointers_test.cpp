#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    // Problem 1
    int a = 10;
    int *p;
    //address of a
    p = &a;

    // output
    // Just p will give you the address of a
    // *p will go to the address of stored in p and get the value from which is value of a
    printf("using pointer %d", *p);
    cout << a;

    //problem 2
    int b[5] = {1, 2, 3, 4, 5};
    int *q;
    q = b;
    //the below line will print the value in a
    for (int i = 0; i < 5; i++)
        cout << q << endl;

    //problem 3

    // C Pointer
    int *r;
    r = (int *)malloc(3 * sizeof(int));
    r[0] = 1;
    r[1] = 2;
    r[2] = 3;
    //this is used to de-allocate the memory in heap
    free(r);

    // C++ pointer
    int *s;
    s = new int[3];
    s[0] = 9;
    s[1] = 19;
    s[2] = 119;
    delete[] s;

    return 0;
}
