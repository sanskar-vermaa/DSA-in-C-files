#include<iostream>
 using namespace std;


 int printodd(int n){
   if(n==1){
    return 1;
   }
  return printodd(n-2);
    cout<<n;

 }
 int main(){
   
int n;
cin>>n;
if(n%2==0){
    n--;
}
printodd(n);

}