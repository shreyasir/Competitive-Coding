#include <iostream>
#include <stdio.h>

using namespace std;
int main()
{
    int n;
    cout << "Enter Size";
    cin >> n;
    int A[n] = {1,
                2,
                3,
                4,
                5};

    for (int x : A)
    {
        cout << x << endl;
    }
    return 0;
}