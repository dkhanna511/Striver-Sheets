#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data1, Node* next1){
        data = data1;
        next  = next1;
    }

    Node(int data1){
        data = data1;
        next = nullptr;
    }

};

void printLL(Node* head){
    while (head !=NULL){
        cout<<head->data<<"  ";
        head = head-> next;
    }

    cout<<endl;
}


Node* delete_end(Node* head){
    
    Node* temp = head;

    // If the linked list is empty of has only one node, return NULL
    if (head == NULL || head->next ==  NULL){
        return NULL;
    }


    while(temp->next->next !=NULL ){
    
        temp = temp->next;
        }
        // Delete the last node.

    delete temp->next;

    // Set the next of the second last node to nullptr, effetively removing the last node.
    temp->next = nullptr;

    //return the head of the modifoed list;
        
    return head;
}

int main(){
    vector<int> arr = {2, 3, 4, 5, 6};

    Node* head = new Node(arr[0]);
    head-> next = new Node(arr[1]);
    head->next->next = new Node(arr[2]);
    head->next->next->next = new Node(arr[3]);

    cout<<" Linked List before : \n";
    printLL(head);

    cout<<"Linkedi List after deletion\n";
    head = delete_end(head);
    printLL(head);
}

