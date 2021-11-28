#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    struct Rectangle p = {10, 5};
    struct Rectangle *r = &p;

    (*r).length = 12;
    (*r).breadth = 6;

    r->length = 13;
    r->breadth = 7;

    return 0;

    //variable of structure in heap using malloc

    //pointer in stack
    struct Rectangle *s;

    //variable in heap
    s = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    s->breadth = 8;
    s->length = 16;
}

struct Rectangle
{
    /* data */
    int length;
    int breadth;
};