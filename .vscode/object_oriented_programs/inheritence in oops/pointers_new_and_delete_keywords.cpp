#include <iostream>
using namespace std;

int main()
{
    int a = 22;
    int *ptr = &a;

    cout << "the value of a is " << *ptr << endl;

    // new keyword;
    int *p = new int(33);
    cout << "the value of adress p is " << *p << endl;

    int *arr = new int[3];

    arr[0] = 2;
    *(arr + 1) = 3;
    arr[2] = 4;
    arr[3] = 6;

    delete[] arr; // to free the memory taken;

    cout << "the value is " << arr[0] << endl;
    cout << "the value is " << arr[1] << endl;
    cout << "the value is " << arr[2] << endl;
    cout << "the value is " << arr[3] << endl;
    return 0;
}