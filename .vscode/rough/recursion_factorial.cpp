#include<iostream>
using namespace std ;

int factorial(int num ){
    
    if(num == 1){
        return 1 ;
    }
    return num * factorial(num-1);
}

int main(){
    int a ;
    cout<<"enter the no of factorial u want"<<endl;
    cin>>a;

    cout<<"the factorial of  "<<a<<"  is : "<<factorial(a)<<endl;
    return 0;
}