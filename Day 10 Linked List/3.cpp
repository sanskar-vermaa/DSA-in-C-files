#include<iostream>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int value){
    data= value;
    next=NULL;
}

};

int main(){
   
Node*Head;
Node * tail;
Head=NULL;
 int arr[]={2,4,5,6,8};

for(int i=0;i<5;i++)
 {

    if(Head==NULL){
        Head = new Node(arr[i]);
        tail=Head;
    }
    else{
        tail->next=new Node(arr[i]);
        tail=tail->next;


    }

  }

  Node*temp=Head;
  while(temp){
    cout<<temp->data<<" ";
    temp=temp->next;
  }
}