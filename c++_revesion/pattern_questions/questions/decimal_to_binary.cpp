#include<iostream>
using namespace std ;

void binaryconverter(int num ){
    int rem ;
    int arr[10];
    int i = 0 ;

    while(num)
{
    rem = num%2;
    num = num/2;
    arr[i] = rem;
    i++;

}
for(int j = i-1 ; j>=0 ; j--){
    cout<<arr[j]<<" ";
}

}
int main(){
    int n ;
    cout<<"enter the number : "<<endl;
    cin>>n;

    binaryconverter(n);
    return 0;
}