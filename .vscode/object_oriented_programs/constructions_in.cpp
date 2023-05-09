#include<iostream>
using namespace std ;

class complex{
    int a , b ;
    public:
    /*
    ->creating a constructor ;
    ->constructer is a special member function with the same name as of the class .
    ->it is used to initialize the object of its class .
    ->it is automaticallu invoked whenever an object is created.
    */
   complex (int , int );

   void printnumber(){
    cout<<"your no is  " << a <<" + "<< b << "i"<<endl;
   }
};
 
 complex :: complex(int x , int y ){
    a = x ;
    b  =y ;
 }

int main(){
    complex a(4 , 6);
    a.printnumber();

    complex b = complex(5,7);
    b.printnumber();
    
    return 0;
}