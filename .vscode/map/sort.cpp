#include<iostream>
#include<functional>
#include<algorithm>
using namespace std ;
int main(){
    int   arr[]= {4,6,3,7,3,2,6};
    // sort(arr , arr+7);
    sort(arr , arr+7 , greater<int>());
    for(int i = 0 ; i < 7 ; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}