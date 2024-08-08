#include<iostream>
using namespace std;

class Node{

public: 

int data;
Node* next;

Node(int value){
   data=value;
    next=NULL;
}

};

int main(){

    int arr[]={2,4,6,8,10};
    Node * Head;
    Head= NULL;

    for(int i=0;i<5;i++){

// linked list exist nahi karti ho 
        
        if(Head==NULL){
            Head=new Node (arr[i]);
        }
      // linked list exist karti 
        else{
             Node*temp;
             temp=new Node (arr[i]);
             temp->next=Head;
             Head=temp;
        }
    }

    // print values;

    Node * temp= Head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }


}