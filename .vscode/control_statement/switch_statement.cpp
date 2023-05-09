#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"enter your age: "<<endl;
    cin>>age;

    switch(age){

        case 1 :
        {
            cout<<"you type 1 "<<endl;
        }
        break;
        case 2 :
        {
            cout<<"you type 2 "<<endl;
        }
        break;
        default :
        {
            cout<<"invalid age "<<endl;
        }
        break;
    }
return 0 ;
}
