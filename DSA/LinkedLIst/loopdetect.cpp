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
bool isLoopPresent(Node* head){
    map<Node* ,bool> visited;
    if(head == NULL){
        return false;
    }
    Node* temp = head;
    while(temp!= NULL){
        if(visited[temp]){
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;
}
void display(Node * head){

    if( head == NULL){
        return;
       
    }
    display(head->next);
    cout<< head->data << " ";
    

    
    // while(head->next != NULL){
    //     cout<< head->data << " ";
    //     head = head->next;
    // }
    // if(head->next == NULL){
    //     cout<< head->data;
    // }
    // cout<<"\n";
}
int main(){
    Node * n1 = new Node(0);
    insertAtEnd(n1,1);
    insertAtEnd(n1,2);
    insertAtEnd(n1,3);
    insertAtEnd(n1,4);
    insertAtEnd(n1,5);
    display(n1);
    //cout<<isLoopPresent(n1)<<endl;
    display(n1);
}
