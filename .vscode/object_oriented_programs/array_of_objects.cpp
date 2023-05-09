#include<iostream>
using namespace std ;

class employee{
    private:
    int id;
    int sallary;

    public:
    void setdata(void){
        cout<<"enter the id of the employee : "<<endl;
        cin>>id;
    }
    void getdata(void){
        cout<<"the id of the employee is : "<<id<<endl;
    }
};

int main(){
    employee fb[4];

    for(int i = 0 ; i< 4 ; i++){
        fb[i].setdata();
        fb[i].getdata();
    }
    
    return 0;
}