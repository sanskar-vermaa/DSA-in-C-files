#include<iostream> 
using namespace std;

class student {

   private: 
    string name;
    int age;
    int cgpa;
    public:

    void setname(string n){
        name=n;
    }

    void setage(int n){
        age=n;
    }
   
   void getname(){
    cout<<name<<endl;
    cout<<age;
   }


};


int main(){

    student s1;

    // s1.name= "SANSKAR";
    // s1.age= 20;
    // s1.cgpa=7.8;

    // cout<<s1.age<<endl;
    // cout<<s1.name;

s1.setname("sanskar");
s1.setage(14);

s1.getname();
}