 #include<iostream>
 #include<map>
 #include<string>
 using namespace std ;
 int main(){
    map<string , int>marksmap;
    marksmap["Naitik"] = 43;
    marksmap["Ashish"] = 66;
    marksmap["dogi"] = 77;

    map<string , int > :: iterator itr = marksmap.begin();
    marksmap.insert({{"komal", 69 } , {"naina" , 22}});

    for(itr ; itr != marksmap.end() ; itr++){
        cout<<itr->first <<" "<<itr->second<<endl;
    }
    return 0;
 }