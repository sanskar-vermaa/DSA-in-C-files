#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    ofstream fout;

    fout.open("z1.txt");

    fout<<" Hello India"<<endl;
    fout<<" Hello Rohit"<<endl;
    fout<<" Hello Bhai "<<endl;

    ifstream fin;
    fin.open("z1.txt");

    string line;

    while(getline(fin, line)){
        cout<<line<<endl;
    
    }
    fin.close();

}