#include<iostream>
using namespace std;
#include<math.h>
int main(){

int num;
cout<<" Enter the number :";
cin>>num;

int rem, ans=0, mul=1;
while(num>0){
   
   //reminder
    rem=num%2;
    //qutient
    num=num/2;
    //ans
    ans=rem*mul+ans;
    // mul
    mul=mul*10;
}
cout<<ans<<endl;


}