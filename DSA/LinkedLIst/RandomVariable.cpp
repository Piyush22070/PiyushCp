#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* random;
    Node(int data){
        this->data = data;
        this->next = NULL;
        this->random = NULL;
    }
};
void displayNext(Node * head){
    if(head == NULL){
        return;
    }
    cout<<head->data<<" ";
    displayNext(head->next);
}
void displayRand(Node* head,int count){

    if(count >= 5){
        return;
    }
    cout<<head->data<<" ";
    displayRand(head->random,count+1);
}

// creating the clone of orignal
Node* createClone(Node* head){
    map<Node*,Node*> mapping;
    Node* temp = new Node(3);
    return temp;
}
//
int main(){
    Node* n1 = new Node(1);
    Node* n2 = new Node(2);
    Node* n3 = new Node(3);
    Node* n4 = new Node(4);
    Node* n5 = new Node(5);

    // next config
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    // random config
    n1->random = n3;
    n3->random = n5;
    n5->random = n2;
    n2->random = n1;
    n4->random = n3;


    // i have linked list name n1 ass orignal linked list
    displayNext(n1);cout<<"\n";
    displayRand(n1,0);

    Node * clone = createClone(n1);
    cout<<"\n\n";

    displayNext(clone);cout<<"\n";
    displayRand(clone,0);


}