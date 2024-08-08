#include<iostream>
using namespace std;

class bank {
    string name;
    int account_number;
    int acount_balance;
    bool is_active;

    public: 

    void setname(string n){
        name=n;
    }
    void setaccount(int n){
      account_number=n;
    }
    void setbalance(int n){
        acount_balance=n;
    }
    void setactive(bool n){
        is_active=true;
    }

    void getbank(){
        cout<<name<<endl;
        cout<<account_number<<endl;
        cout<<acount_balance<<endl;
       // cout<< is_active<<end;

    }

};
int main(){

    bank customer;

    customer.setname("Aman");
    customer.setbalance(150000);

    customer.setaccount(14252145224);
    



    customer.getbank();



}