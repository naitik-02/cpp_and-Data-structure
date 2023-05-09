#include<iostream>
using namespace std ;

class base1{
    public:
    void greet(){
        cout<<"good morning"<<endl;
    }
};
class base2{
    public:
    void greet(){
        cout<<"good afternoon"<<endl;
    }
};

class base3:public base1 , public base2{
    public:
    void greet(){
        base2:: greet();
    }
    int a ;
};
int main(){
    base3 greeting;
    greeting.greet();
    
    return 0;
}