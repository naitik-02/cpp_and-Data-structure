#include<iostream>
using namespace std ;

class employee {
    public :
    int id ;
    int salary ;
    employee(){
        salary = 55;
    }
    employee(int inptID){
        id = inptID;
      
       
    }

};
/*
derieved class syntax :

class {{derieved -class - name}} : {{visibility - mode}}  {{base - class - name}}{

    class mwmbwe/methods/etc
}
*/

/*
   -------------------NOTE--------------------
   1. default visibility mode is private ;
   2. pub;ic isibi;ity mode: pub;ic members of base class becomes public members of the derieved class ;
   3. private visibility mode: public members of the base class becomes private members of the derieved class;
   4. private members are never inherited ;
*/

class programer : public employee{
        public:
        int languagecode;
        
        programer(int inputID){
            id = inputID;
            languagecode = 9 ;
        }
        void getdata(){
            cout<<id<<endl;
        }
};


int main(){
    employee e1 , e2 , e3 ;
    cout<<e1.salary<<endl;
    cout<<e2.salary<<endl;

    programer p1(10);
    p1.getdata();
    cout<<p1.languagecode;

    
    
    return 0;
}