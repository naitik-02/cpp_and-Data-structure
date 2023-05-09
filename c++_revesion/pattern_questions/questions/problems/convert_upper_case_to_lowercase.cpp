#include<iostream>
#include<string>
using namespace std ;
int main(){
    string str = "GFOIJFDOJEU";

    for(int i = 0 ; i<=str.size(); i++){
        if(str[i]>= 'A'&& str[i]<='Z'){
                str[i] = str[i]+32;
        }

    }
    cout<<str;
    return 0;
}