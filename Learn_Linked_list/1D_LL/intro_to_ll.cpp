#include<iostream>
#include<vector>
using namespace std;

class Node{
    public: //access mofifier
    int data; // the data value
    Node* next; //pointer to the next value
    public:
    //Constructor
    Node(int data1, Node* next1){
        data = data1;  // Initialize the data with the provided value
        next = next1; //Initialize next with the provided pointer address
    }

    Node(int data1){
        data = data1; //Initialize the data with the provided value
        next  = nullptr; //Initialize next as null since its the end of the list
    }
};

int main(){
  
    vector<int> arr = {2, 5, 8, 7};

    // Create a pointer 'y' pointing to the node "X"
    Node* y = new Node(arr[0]);
    cout<<y<<"\n"; //returns the memory value
    cout<<y->data<<"\n"; //returns the data stored at that memory

    cout<<" Point Example"<<endl;

    int x = 2;
    int* y2 = &x; /// y reference x
    cout<<y2<<endl; // This will print the memory whre 2 is stored.


    cout<<"Understanding pointer in LL"<<endl;

    vector<int> arr2 = {2, 5, 8, 7};
    Node x2 = Node(arr[0], nullptr); // 1st constructor called
    // Create a pointer "y3" pointing to the Node 'x2' 
    Node* y3 = &x2;
    //Print the memory address of the Node 'x2' using the pointer 'y3'
    cout<<y3<<'\n';

    return 0;

}