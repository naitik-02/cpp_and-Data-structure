#include<iostream>
using namespace std ;

class baseclass{
    public:
    int var_base;
    void display(){
        cout<<"the value of var_base class is "<<var_base<<endl;

    }
};
class derivedclass : public baseclass{
    public:
    int var_derived;
    void display(){
        cout<<"the value of var_derived class is "<<var_derived<<endl;
    }
};
int main(){
    baseclass * base_class_pointer;
    baseclass objectbase;
    derivedclass objectderived;
    base_class_pointer = &objectderived;

    base_class_pointer->var_base  = 44;   
     base_class_pointer->display();

    //  base_class_pointer->var_derived = 123;  ---->> error because base class
    // pointer only points the base class variables;

    derivedclass * derived_class_pointer;
    derivedclass harry;
    derived_class_pointer = &harry;
    derived_class_pointer->var_derived= 155;
    
    derived_class_pointer->display();
    base_class_pointer->display();

    return 0;
}