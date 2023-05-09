#include<iostream>
#include<fstream>
using namespace std ;

/*the useful for working with files in c++ are ;
1. fstreambase .
2. ifstream -->derived from fstreambase .
3. ofstream -->> derived from fstreambase .
*/ 

//in order work with files in c++ , you will have to open it . there are twoo ways to open
//   file
// 1. using the constructor .
// 2. using the member function open()of the class

int main(){
    string st = "harry bhai";
// opening file using constructor and writing to it ;
    ofstream out("fuct.txt");
    out<<st;

//opening file using constructor and reading to it ;
string st2;
    ifstream in("fuct.txt");
    getline(in , st2 );
    
    
   

    cout<<st2;
    
    
    return 0;
}