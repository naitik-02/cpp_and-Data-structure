#include <iostream>
using namespace std;
class complex ;
class calculator {
    public :
    int add(int a , int b ){
        return (a+b);
    }
    int sumrealcomplex(complex , complex);

};


class complex
{
    int a, b;
friend int calculator :: sumrealcomplex(complex , complex );
public:
    friend complex sumcomplex(complex o1, complex o2);
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printnum()
    {
        cout << a << " + " << b << "i" << endl;
        
    }
};
int calculator::sumrealcomplex(complex o1 , complex o2){
    return(o1.a + o2.a);
}

complex sumcomplex(complex o1, complex o2)
{
    complex o3;
    o3.setnumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    complex o1, o2, sum;
    o1.setnumber(1, 4);
    o1.printnum();

    o2.setnumber(2, 5);
    o2.printnum();
    cout<<"-------"<<endl;                   
    sum = sumcomplex(o1, o2);
    sum.printnum(); 
calculator calc; 

int sum = calc.realsumcomplex()
    int sum = 

    return 0;
}
/*     properties of the friend function ;
1 . not in the class of function ;
2 . since it is not of scope of class , it cannot be called from the object at that class ;
3 . can be invoked without the help of any object ;
4 . usually contains the object as arguemnts  ;
5 . can be decleared inside public or private section of the class ;
6 . it cannot access the members directly by their names and need object _name .member _name to access my members ;

*/ 