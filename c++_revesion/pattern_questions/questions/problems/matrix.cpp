#include<iostream>
using namespace std ;
int main(){
    int m , n;
    cin>>m>>n;

    int arr[m][n];

    for(int i = 0 ; i<m ; i++){
        for(int j =  0 ; j<n ; j++){
            cin>>arr[m][n];
        }
    }
cout<<"your matrix is below"<<endl;
    for(int i = 0 ; i<m ; i++){
        for(int j =  0 ; j<n ; j++){
           cout<<arr[m][n];
        }
        cout<<endl;
    }
    return 0;
}