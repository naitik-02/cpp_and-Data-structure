#include<iostream>
using namespace std ;

class employee{
    private:
    int ID;
     static int count;
     public:
      void setdata(void){
        cout<<"enter the ID "<<endl;
        cin>>ID;
        count++;
      }
    void getdata(void){
        cout<<"the id of this employee is "<<ID <<"and this is employee number"<<count<<endl; 

        cout<<endl;
    }
};
int employee:: count;
int main(){
    employee naitik , ashish , pandey;
    naitik.setdata();
    naitik.getdata();

     ashish.setdata();
    ashish.getdata();

  pandey.setdata();
  pandey.getdata();


    return 0;
}