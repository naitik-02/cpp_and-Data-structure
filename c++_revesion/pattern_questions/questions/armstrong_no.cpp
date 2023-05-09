#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int origional = number;
    int sum = 0;
    while (number > 0)
    {
        int lastnumber = number % 10;

        sum = sum + (pow(lastnumber, 3));

        number = number / 10;
    }
    if (sum == origional)
    {
        cout << "this is armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }
    return 0;
}