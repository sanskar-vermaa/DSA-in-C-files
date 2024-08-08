// #include<iostream>
// using namespace std;

// class Node{
//   public:

//   int data;
//   Node*left;
//   Node*right;

//   Node(int value){
//     data=value;
//     left=right=NULL;
//   }

// };

// bool insertion(Node*root, int target){
    
//     if(root==NULL){
//       Node*temp=new Node(target);
//       return temp;
//     }
    
//     // root ke left me insert
//     if(target < root->data){
//       return insertion(root->left,target);
//     }

//     // root ke right me insert
//     // target>=root to right me insert karenge

//     else{
//       return  insertion(root->right,target);
//     }

//     return root;
// }

// void inorder(Node*root){
//   if(!root){
//     return ;
//   }
// // left
//   inorder(root->left);
//   //node
//   cout<<root->data<<" ";

//   // right
//   inorder(root->right);
// }

// bool search(Node*root,int target){
//   if(root==NULL){
//     return 0;
//   }

//   if(root->data==target){
//    return 1;
//   }

//   if(target<root->data){
//     return search(root->left,target);
//   }
//   else{
//    return search(root->right,target);
//   }
// }

// int main(){
//   int arr[]={3,4,5,2,6,1};
//   Node*root=NULL;
//   // int target=2;


//   for(int i=0;i<6;i++){
//       root= insertion(root,arr[i]);
//   }

//   // inorder(root);

//   cout<<search(root,5);
  
// //  return 0;

// }

#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

// Function to insert a value into the BST
Node* insertion(Node* root, int target) {
    if (root == NULL) {
        // Create a new node and return it
        return new Node(target);
    }

    if (target < root->data) {
        // Insert into the left subtree
        root->left = insertion(root->left, target);
    } else {
        // Insert into the right subtree
        root->right = insertion(root->right, target);
    }

    return root;
}

// Function to perform inorder traversal
void inorder(Node* root) {
    if (root == NULL) {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

// Function to search for a value in the BST
bool search(Node* root, int target) {
    if (root == NULL) {
        return false;
    }

    if (root->data == target) {
        return true;
    }

    if (target < root->data) {
        return search(root->left, target);
    } else {
        return search(root->right, target);
    }
}

int main() {
    int arr[] = {3, 4, 5, 2, 6, 1};
    Node* root = NULL;

    // Insert elements into the BST
    for (int i = 0; i < 6; i++) {
        root = insertion(root, arr[i]);
    }

    // Print inorder traversal of the BST
    cout << "Inorder Traversal: ";
    inorder(root);
    cout << endl;

    // Search for the target value
    int target = 15;
    if (search(root, target)) {
        cout << "Value " << target << " found in the BST." << endl;
    } else {
        cout << "Value " << target << " not found in the BST." << endl;
    }

    return 0; // Indicate successful completion
}
