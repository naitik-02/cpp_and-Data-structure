#include<iostream>
using namespace std ;

bool check(int x , int y ,  int z){
    int a , b , c ;
    a = max(x,  max(y,z));

    if(a == x ){
        b = y;
        c = z;
    }
    else if(a == y){
        b = x ;
        c = z;

    }
    else{
        b =x ;
        c = y;
    }

    if(a*a ==( b*b + c*c)){
        return true;
    }
    else{
        return false;
    }
    
}

int main(){
    int x , y , z;

    cin>>x>>y>>z;

if (check(x,y,z)){
    cout<<"its a pythagorean triplet";
}
else{
    cout<<"not a pythagorean triplet";
}
    return 0;
}