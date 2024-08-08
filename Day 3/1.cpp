#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// <int> arr  that is called pass by value 
// <int > &arr that is called pass by refrence 

void devide(vector <int> arr)
{

}

int main(){

int n;
cout<<" Enter the size of array :";
cin>>n;

vector<int>v(n);

cout<<" Enter the element in array : ";

for(int i=0;i<n;i++){
    cin>>v[i];
}
cout<<devide(v);

}