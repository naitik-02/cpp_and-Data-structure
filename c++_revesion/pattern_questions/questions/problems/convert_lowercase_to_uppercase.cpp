#include<iostream>
#include<string>
using namespace std ;
int main(){
    string str;
    str = "hueivnjfjhughr";

    for(int i = 0 ; i<=str.size(); i++){
        if(str[i]>='a' &&str[i]<='z'){
             str[i]= str[i]-31;
        }
    }
cout<<str;
    return 0;
}