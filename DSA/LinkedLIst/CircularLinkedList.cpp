#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
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
void insertNode(Node * & tail ,int element ,int data){

    if(tail == NULL){
        Node * temp = new Node(data);
        tail = temp;
        tail->next = temp;
    }else{
        //we have craeted the new pointer tail
        Node *curr = tail;
        while (curr->data != element){
            curr = curr->next;
        }

        Node * temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void display(Node * tail){
   Node * temp = tail;
   do{
    cout<<tail->data<<" ";
    tail = tail->next;
   }while (tail != temp);
   cout<<"\n";
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

    if(temp == head ){
        return true;
    }
    return false;
}
int main(){

    Node * tail = NULL;

    insertNode(tail,5,3);
    display(tail);
    insertNode(tail,3,8);
    display(tail);
    insertNode(tail,3,9);
    display(tail);
    insertNode(tail,3,10);
    display(tail);

    if(isCircular(tail)){
        cout<<"Circular\n";
    }else{
        cout<<"Not Circular \n";
    }

}