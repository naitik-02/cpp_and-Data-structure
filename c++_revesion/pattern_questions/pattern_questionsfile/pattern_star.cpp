//    print like this in row and coloms
//    ****
//    ****
//    ****
//    ****
#include<iostream>
using namespace std ;
int main(){
    int row  , col ;
    cout<<"enter rows : "<<endl;
    cin>>row;
    cout<<"enter colomns : "<<endl;
    cin>>col;

    for(int i = 0 ; i<row ; i++){
         for(int j = 0 ; j<col ; j++){
        cout<<"*";
        
    }
    cout<<endl;
    }
    return 0;
}