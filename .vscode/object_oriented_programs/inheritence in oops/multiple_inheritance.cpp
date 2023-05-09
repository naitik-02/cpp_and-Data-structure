#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1(int a)
    {
        base1int = a;
    }
};
class base2
{
protected:
    int base2int;

public:
    void set_base2(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{

public:
    void show()
    {
        cout << "the value of base1int is " << base1int << endl;
        cout << "the value of base2int is " << base2int << endl;
        cout << "the value of base3int is " << base3int << endl;
        cout << endl;
        cout << "the sum of the base vakue is " << (base1int + base2int + base3int) << endl;
    }
};

int main()
{

    derived a1;
    a1.set_base1(5);
    a1.set_base2(7);
    a1.set_base3(8);
    a1.show();

    return 0;
}