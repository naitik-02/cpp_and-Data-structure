#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>>n;
    int arr[n];
    int mx = -1212222;

    for(int i = 0 ; i<=n ; i++) {
        cin>>arr[i];
    }
    for(int j = 0 ; j<=n ; j++){
        mx = max(mx , arr[j]);
    }
    cout<<"the maximum element is : "<<mx;
    
    return 0;
}