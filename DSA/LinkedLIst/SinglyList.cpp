#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node(int data){
        this->data =data;
        this->next = NULL;
    }
};
void insertAtHead(Node * &head, int data){
    Node * temp = new Node(data);
    temp->next = head;
    head = temp;
}
void insertAtEnd(Node * &head,int data){
    Node * temp = new Node(data);
    if(head == NULL){
        return;
    }
    Node * ptr = head;

    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    if(ptr->next == NULL)
         ptr->next = temp;
}
void insertAtPosition(Node * &head, int pos, int data){
    Node * temp = new Node(data);
    Node * ptr  =head;

    // loopp till the idnex
    for (int i = 1; i < pos - 1; i++){
        ptr= ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
    
}
void deletePostion(Node * &head,int pos){
    Node * ptr = head;
    for (int i = 1; i < pos-1; i++){
        ptr = ptr->next;
    }
    ptr->next = ptr->next->next;
    
    
    
}
void display(Node * head){
    if( head == NULL){
        return;
    }
    while(head->next != NULL){
        cout<< head->data << " ";
        head = head->next;
    }
    if(head->next == NULL){
        cout<< head->data;
    }
    cout<<"\n";
}
void solve(Node * & head , Node * curr , Node * prev){
        // base case 
        if(curr == NULL){
            head = prev;
            return;
        }
        solve(head,curr->next,curr);
        curr->next = prev;     
}
int getLenght(Node* head , int k){
    int c = 0 ;
    while(head != NULL){
        c++;
        head = head->next;
    }
    return c;
}
Node* kthRevrse(Node* head , int k){

    if(head == NULL){
        return NULL;
    }
  
    Node* next = NULL;
    Node* prev = NULL;
    Node* curr = head;
    int count = 0;

    // here the K th condition will be checked first
    while(curr != NULL && count < k){
       next = curr->next;

       curr->next = prev;
       prev = curr;
       curr = next;
       count++;
    }

    if( next != NULL){
        if(getLenght(next,k) >= k ){
            head->next = kthRevrse(next,k);
        }else{
            head->next = next;
        }
        
    }
    return prev;
}
Node* reverseList(Node* & head) {
        
    Node *prev = NULL;
        Node *curr = head;
        solve(head,curr,prev);
        
        return head;
}
bool isCircular(Node * head){
    // empty case 
    if(head == NULL){
        return false;
    }
    Node* temp = head->next;
    while(head != NULL && temp != head ){
        temp = temp->next;
    }

    if(head == temp ){
        return true;
    }

    return false;
}
int main(){
    Node * n1 = new Node(0);
    // insertAtHead(n1,4);
    // insertAtHead(n1,3);
    // insertAtHead(n1,2);
    // insertAtHead(n1,1);

    insertAtEnd(n1,1);
    insertAtEnd(n1,2);
    insertAtEnd(n1,3);
    insertAtEnd(n1,5);
    insertAtEnd(n1,6);

   // insertAtPosition(n1,3,99);

    //display(n1);

    //deletePostion(n1,3);

   // display(n1);
   // reverseList(n1);

   // display(n1);
   // kthRevrse(n1,2);
    display(n1);
    cout<<isCircular(n1);
}