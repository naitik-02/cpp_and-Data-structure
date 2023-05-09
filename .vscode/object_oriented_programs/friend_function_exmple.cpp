#include <iostream>
using namespace std;
class Y ;
class X
{
    int data;

public:
friend void add(X , Y );
friend void exchange(X& , Y& );
    void setdata(int value)
    {
        data = value;
    }
    void display(){
        cout<<"the value  elsment   is "<<data<<endl;
    }
};

class Y
{
    int num;

public:
friend void add(X , Y );
friend void exchange(X& , Y& );
    void setdata(int value)
    {
        num = value;
    }
     void display(){
        cout<<"the value  a  is "<<num<<endl;
    }
};

    void add(X o1 , Y o2 )
    {
        cout << "the sum of X and Y objects gives " <<( o1.data  + o2.num)<<endl;
    }

    void exchange(X &c1 , Y &c2 ){
        int temp ; 
        temp = c1.data ;
        c1.data = c2.num;
        c2.num = temp ; 
    }
     

int main()
{
     X a1 ;
     a1.setdata(3);

     Y b1 ; 
     b1.setdata(7) ;
     exchange(a1 , b1);

       a1.display();
       b1.display();

    //  add(a1 ,b1);


    return 0;
}