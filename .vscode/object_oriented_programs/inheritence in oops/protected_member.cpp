#include<iostream>
using namespace std ;

class base {
        protected :
        int a;
        private:
        int b;
};
/*
-------------------------public derivation -----private derivation-----protected derivation
                    
1. private members        not inherited            not inherited            not inherited

2. protected mem          protected                private                    protected

3. public mem              public                  private                    protected

*/

class derived : protected base{

};

int main(){
    base b1;
    derived d1;
  
    
    return 0;
}