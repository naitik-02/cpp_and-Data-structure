#include<iostream>
using namespace std ;

class A {
    int a ;
    public:
     void setdata (int a ){
        this->a = a ;
        
    }
    void getdata (){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){
    A  harry;
    harry.setdata(44);
    harry.getdata();
    
    return 0;
}