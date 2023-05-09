/*
create 2 classes;

1. simple calculator:  ---> takes input of two numbers using a utility function and performs  
* , - , + , /  and displays the result using another function .

2. scientificcalculator ------>takes input of 2 numbers using a utility function and performs 
using four scientfic operations of your choice and displays the result using another functions 


create another class hybridcalculator and inherit it using these 2 classes :
Q1. what type of inheritance are you using ;
Q2. which mode of inheritance are you using ;
Q3. create an object of hybrid calculator and display results of single and scientific calculator
Q4. how is code reusebility implemented ;
*/
#include<iostream>
#include<math.h>
using namespace std ;

class simpleCALCULATOR{
    int a ; 
     int b ;
     public:
     void setnum(){
        cout<<"enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b "<<endl;
        cin>>b;
     }
     void displayoperation(){
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
        cout<<a<<" / "<<b<<" = "<<a/b<<endl;
     }
};
class scientificCALCULATOR{
    int a ; 
     int b ;
     public:
     void setvalue(){
        cout<<"enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b "<<endl;
        cin>>b;
     }
     void display(){
        cout<<"the value of cos(a) is "<<cos(a)<<endl;
        cout<<"the value of sin(a) is "<<sin(a)<<endl;
        cout<<"the value of exp(a) is "<<exp(a)<<endl;
        cout<<"the value of tan(a) is "<<tan(a)<<endl;
     }
};

class hybridCALCULATOR : public simpleCALCULATOR ,public scientificCALCULATOR{

};

int main(){
   hybridCALCULATOR calc;
   calc.setnum();
   calc.displayoperation();
   calc.setvalue();
   calc.display();


    
    return 0;
}