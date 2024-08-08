
#include<iostream>
#include<queue>
using namespace std;

class Node {
public:
    int data;
    Node* left, * right;

    // Constructor to initialize a Node with a given value
    Node(int value) {
        data = value;
        left = right = NULL;
    }
};

int main() {
    // Queue to store nodes during the tree construction
    queue<Node*> q;

    int first, second;
    int x;

    // Prompting user to enter the value of the root node
    cout << "Enter the value of root node:" << endl;
    cin >> x;

    // Creating the root node
    Node* root = new Node(x);
    q.push(root);

    // Loop until all nodes are inserted
    while (!q.empty()) {
        // Get the front node from the queue
        Node* temp = q.front();
        q.pop();

        // Prompting user to enter the value of the left child
        cout << "Enter the value of left child for node " << temp->data << ":" << endl;
        cin >> first;

        // If input is not -1, create a left child for the current node
        if (first != -1) {
            temp->left = new Node(first);
            // Push the left child to the queue for further processing
            q.push(temp->left);
        }

        // Prompting user to enter the value of the right child
        cout << "Enter the value of right child for node " << temp->data << ":" << endl;
        cin >> second;

        // If input is not -1, create a right child for the current node
        if (second != -1) {
            temp->right = new Node(second);
            // Push the right child to the queue for further processing
            q.push(temp->right);
        }
    }

    // Tree construction completed
    cout << "Tree construction completed." << endl;

    // Freeing memory allocated to the root node
    delete root;

    return 0;
}
