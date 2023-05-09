#include<iostream>
using namespace std ;

   int binarytodecimal(int num){

    int ans = 0 ;
    int x = 1 ;
    while(num>0){
        int rem = num%10;
        ans = ans + (x*rem);
        x = x*2;
        num = num/10;
    }
    return ans;
   }
int main(){
    int num;
    cin>>num;

    cout<<binarytodecimal(num)<<endl;
    return 0;
}