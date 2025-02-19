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
        data = data1;
    }

};

void printLL(Node* head){
    while (head->next !=NULL){
        cout<<head->data<<"  ";
        head = head->next;
    }

    cout<<endl;
}

bool searchLL(Node* head, int element){
    
    while (head->next!=NULL){
        // cout<<" data is : "<<head->data<<endl;
        if (element == head->data){
            // cout<<" Coming here???"<<endl;
            return true;
        }
        head = head->next;
    }

    return false;
}


int main(){
    vector<int> arr = {2, 3, 4, 5};
    Node* head = new Node(arr[0]);

    head-> next = new Node(arr[1]);
    
    head-> next->next = new Node(arr[2]);
    head-> next ->next->next = new Node(arr[3]);

    int element;
    cin>>element;
    bool is_present;
    is_present = searchLL(head, element);
    // printLL(head);
    cout<<" is present is : "<<is_present<<endl;
    if (is_present){
        cout<<" Element "<<element<< " is present in the LL";
    }
    else{
        cout<<" Element "<<element<<" is NOT present in the LL";
    }

    
    return 0;
}