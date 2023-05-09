#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"enter your age: "<<endl;
    cin>>age;

    if(age<18){
        cout<<"you can not able to drive !"<<endl;

    }
    else if(age >= 18 && age<=70  ){
        cout<<"ypu can drive  !"<<endl;

    }
    else if (age > 70 && age<=100){
        cout<<"you cannot drive !"<<endl;
    }
    else {
        cout<<"invalid age !";
    }
return 0 ;
}
