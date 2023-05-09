#include<iostream>
using namespace std ;
int main(){
    int n ;
    cout<<"enter the value of n :"<<endl;
    cin>>n;

    for(int i = 1 ; i <= n ; i++){
        for(int j = 1 ; j<=n-i ; j++){
            cout<<" ";

        }
        for(int f = 1 ; f<=i ; f++){
            cout<<f<<" ";
            for(int s = n ; s<= 1 ; s--){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}