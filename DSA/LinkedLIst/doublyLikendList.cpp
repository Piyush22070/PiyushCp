#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node * next;
    Node * prev;
    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }
    ~Node(){
        int val = this->data;
        if(next !=  NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free up ! : "<<val<<endl;
    } 
};

void display(Node * head){
    if( head == NULL){
        return;
    }
    while(head->next != NULL){
        cout<< head->data << endl;
        head = head->next;
    }
    if(head->next == NULL){
        cout<< head->data << endl;
    }
}
int main(){
    Node * head = new Node(1);
    display(head);
}