#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    // Node* head;
        Node(int data1, Node* next1){
            data  = data1;
            next = next1;
        }

        Node(int data1){
            data = data1;
            next = nullptr;
        }
};

void printLL(Node* head){
    while (head !=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}


// Function to insert a new node at the head of the linked list.
Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head); // temporary point pointing to head
    return temp;
}




int main()
{
    vector<int> arr = {12, 8, 5, 7};

    int val = 100;
    
    Node* head = new Node(arr[0]);
    head-> next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    
    //Inserting a new node at the head of the linked list.
    head = insertHead(head, val);

    //Printing the linked list
    printLL(head);

}

