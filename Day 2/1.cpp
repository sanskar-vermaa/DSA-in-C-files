#include<iostream>
#include<vector>

using namespace std;

int main(){

    vector <int> v;
    vector<int> v1(4,5);

    cout<<" Size of vector: "<<v.size()<<endl;
    cout<<" Size of Capacity : "<<v.capacity()<<endl;
  
  v.push_back(5);
  v.push_back(5);
  v.push_back(8);

  cout<<" Size of vector: "<<v.size()<<endl;
    cout<<" Size of Capacity : "<<v.capacity()<<endl;
 
 v1[1]=5;

   cout<<" Size of vector: "<<v1.size()<<endl;
    cout<<" Size of Capacity : "<<v1.capacity()<<endl;

    v1.push_back(5);
    v1.push_back(10);
     cout<<" Size of vector: "<<v1.size()<<endl;
    cout<<" Size of Capacity : "<<v1.capacity()<<endl;
    

 

}