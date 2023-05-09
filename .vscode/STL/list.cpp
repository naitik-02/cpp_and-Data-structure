#include<iostream>
#include<list>
using namespace std ;

void display(list<int> &lst){
    list<int> :: iterator itr = lst.begin();

    for(itr ; itr != lst.end() ; itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> list1;

    list1.push_back(5);
    list1.push_back(6);
    list1.push_back(0);
    list1.push_back(8);  
    list1.push_back(1);
    list1.push_back(10);

    display(list1);
    // removing elements on the list;
     // list1.pop_back();
     // list1.pop_front();
     // list1.remove(8);

     // sorting the list ;
       list1.sort();

    display(list1);


    list<int> list2(4);
    list<int> :: iterator itr2 = list2.begin();

   *itr2 = 22 ; 
   itr2++;
   *itr2 = 44 ;
   itr2++;
   *itr2 = 99 ;
   itr2++;
   *itr2 = 33 ;
   itr2++;
   *itr2 = 00 ;
   itr2++;

   display(list2);
list2.sort();

list2.merge(list1);
list2.reverse();

   display(list2);
    
    return 0;
}