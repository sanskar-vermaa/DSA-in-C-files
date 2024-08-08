#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<" Enter the number : ";
    cin>>num;
    int rem;
    int mul=1;
    int ans=0;
    while(num>0){

        // reminer 
     rem=num%10;
        //qoutient
        num=num/10;
        // ans
     ans=rem*mul+ans;

        // update multimplier 2^i;
        mul=mul*2;


    }
    cout<<ans;

}