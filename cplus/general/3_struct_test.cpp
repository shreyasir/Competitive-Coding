#include <iostream>
#include <sstream>

using namespace std;
struct Rectangle
{
    /* data */
    int length;
    int breadth;
};
int main()
{
    struct Rectangle r;
    r.length = 10;
    r.breadth = 15;
    printf("Area of rectangle %d", r.length * r.breadth);
    cout << r.length << endl;
    return 0;
}
