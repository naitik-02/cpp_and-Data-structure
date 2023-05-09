#include<iostream>
using namespace std ;

int moneyreceived(int money ,float factor = 1.04){
    return factor*money;
}
int main(){
    int money= 1000000;
     

    cout<<"the money invested is "<<money<<"   .the money obtained is "<<moneyreceived(money)<<endl;
cout<<" you are a vip person the money invested is "<<money<<".  the money obtained is "<<moneyreceived(money,1.14);
    return 0;

}
