#include<iostream>
using namespace std; 
 
class customer {
    
 string name;
 int age;
 int salary;
 string colony;
public:

  // defaoult cunstructor
  customer(){
    cout<<" i am a cunstructor"<<endl;
  }
   
   // parameterise cunstrocture
  customer (string a, int b, int c, string d){
     name= a;
     age=b;
     salary=c;
     colony=d;
  }

//Over loading cunstructor
  customer(string a, string b){
    name=a;
    colony=b;
  }

  void display(){
    cout<<name<<endl;
    cout<<age<<" "<<endl;
    cout<<salary<<endl;
    cout<<colony<<endl;
    
  }

   
};

 int main(){

    customer A1;
    customer A2("sanskar", 18,25,"aman");
    A2.display();
    customer A3("SANSAKR", "DABRA");
    A3.display();

    customer A5(A2);
    A5.display();
   customer A6=A3;
    A6.display();



 }