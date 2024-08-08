#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

Node* createLinkedList(int arr[], int index, int size) {
    if (index == size) {
        return NULL;
    }

    Node* temp;
    temp = new Node(arr[index]);
    temp->next = createLinkedList(arr, index + 1, size);
    return temp;
}

int main() {
    Node* Head;
    Node* tail;
    Head = NULL;

    int arr[] = {2,4,6,8,10 };

    Head = createLinkedList(arr, 0, 5);

    int x = 3;
    int value = 30;

    Node* temp = Head;
    x--;

    while (x--) {
        temp = temp->next;
        x--;
    }

    Node* temp2 = new Node(value);
    temp2->next = temp->next;
    temp->next = temp2;

    // Print the linked list
    Node* printTemp = Head;
    while (printTemp) {
        cout << printTemp->data << " ";
        printTemp = printTemp->next;
    }

    return 0;
}
