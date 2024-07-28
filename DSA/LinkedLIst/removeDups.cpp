#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
    int data;
    Node * next;
    Node(int data){
        this->data = data;
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
void display(Node * head){

    if( head == NULL){
        cout<<"\n";
        return;
    }
    cout<< head->data << " ";
    display(head->next);
}
void removeDups(Node* head){
    Node* temp = head;
    while(temp->next != NULL){
        int curr = temp->data;
        if(temp->next->data == curr){
            temp->next = temp->next->next;
        }else{
            temp = temp->next;
        } 
    }
}
void removeDupsUnsoreted(Node * head){
    map<int,bool> visted;
    Node* temp = head;
    while(temp->next != NULL){
        if(visted[temp->next->data] != true){
            visted[temp->data]  = true;
            temp = temp->next;
        }
        else{
            if(temp->next->next != NULL)
                temp->next = temp->next->next;
        }
    }
}
void sortLL(Node * head){
    map<int,int> count;
    Node* temp = head;
    while(temp != NULL){
        count[temp->data]++;
        temp = temp->next;
    }
    // for(int i = 0 ; i < count.size() ; i++){
    //     cout<<count[i]<<" ";
    // }cout<<"\n"; 
}
Node* solve(Node * first , Node * second){
    
    Node* curr1 = first;
    Node* curr2 = second;
    Node* next1 = first->next;
    Node* next2 = second->next;
    
    while(next1 != NULL && curr2 != NULL){
        if((curr2->data >= curr1->data) && curr2->data <= next1->data){
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            curr1 = curr2;
            curr2 = next2;
        }else{
            curr1 = next1;
            next1 = next1->next;
            if(next1 == NULL){
                curr1->next = curr2;
                return first;
            }
        }
    }
    return first;
}
Node* mergeTwoSorted(Node* first,Node* second){
    if(first == NULL){
        return second;
    }
    if(second == NULL){
        return first;
    }
    if(first->data <= second->data){
       return solve(first,second);
    }else{
         return solve(second,first);
    }
}
bool checkPlaindrome(Node * head){
    
}
int main(){
    Node * n1 = new Node(1);
    insertAtEnd(n1,2);
    insertAtEnd(n1,5);
    insertAtEnd(n1,2);
    insertAtEnd(n1,1);

    Node*n2 = new Node(2);
    insertAtEnd(n2,3);
    insertAtEnd(n2,5);

   // display(n1);
   // display(n2);
    //removeDups(n1);
    //removeDupsUnsoreted(n1);
    //sortLL(n1);
   // mergeTwoSorted(n1,n2);
   // checkPlaindrome(n1);
   
    display(n1);
}
