#include<iostream>
using namespace std ;

class number {
    int a ;
    public:

    number(){
        a = 0 ;
    }
    number(int num ){
        a = num ;
    }
    number (number &obj){
        cout<<"copy consructer called "<<endl;
        a = obj.a;
    }
    void show(){
        cout<<"the value for this object is "<<a<<endl;
    }
};
int main(){
    number x , y(22)  ;
    x.show();
    number z(y);
    z.show();
    
    


    
    return 0;
}