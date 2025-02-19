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
        next = next1;
    }

    Node(int data1){
        data = data;
    }

};

void printLL(Node* head){
    while (head->next !=NULL){
        cout<<head->data<<"  ";
        head = head->next;
    }

    cout<<endl;
}

int getLength(Node* head){
    int count = 0;

    if (head == NULL){
        return 0;
    }
    if (head->next == NULL){
        return 1;
    }


    while (head!=NULL){
        count++;
        head = head-> next;
    }

    return count;
}


int main(){
    vector<int> arr = {2, 3, 4, 5};
    Node* head = new Node(arr[0]);

    head-> next = new Node(arr[1]);
    
    head-> next->next = new Node(arr[2]);
    head-> next ->next->next = new Node(arr[3]);


    int count;
    count = getLength(head);
    cout<<" Length of linked list is :" <<count<<endl;

    
    return 0;
}