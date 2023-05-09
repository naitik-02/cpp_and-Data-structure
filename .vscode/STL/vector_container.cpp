#include<iostream>
#include<vector>

using namespace std ;

void display(vector<int> &A){
    for(int i = 0 ; i < A.size() ;i++){
        cout<<A[i]<<" ";
        cout<<A.at(i)<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    int element;
    int size;
    cout<<"enter the size of array : "<<endl;
    cin>>size;
    for(int i = 0 ; i < size ; i++){

        cout<<"enter the element you want : "<<endl;
        cin>>element;

        vec1.push_back(element);
         
    }
        display(vec1);
        vector<int> :: iterator uu = vec1.begin();
        vec1.insert(uu+3 ,5 , 444);
        display(vec1);
    
    return 0;
}