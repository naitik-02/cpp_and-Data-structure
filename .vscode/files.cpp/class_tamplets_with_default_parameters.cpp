#include <iostream>
using namespace std;

template <class t1 = int, class t2 = float, class t3 = char>
class myclass
{
public:
    t1 a;
    t2 b;
    t3 c;
    myclass(t1 x, t2 y, t3 z)
    {
        a = x;
        b = y;
        c = z;
    }
    void display()
    {
        cout << "the value of a is " << a << endl;
         cout    << "the value of b is " << b << endl;
         cout    << "the value of c is " << c << endl;
    }
};
int main()
{
    myclass<> obj(3, 4.2, 'N');
    obj.display();
cout << endl;
    myclass<float , int , float> h(3.5 , 6 ,1.3 );
    h.display();

    return 0;
}