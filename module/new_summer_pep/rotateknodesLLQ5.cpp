#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

void insert(Node* &head, int val){
    Node* node= new Node(val);
    if(head==NULL){
        head=node;
        return;
    } 
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=node;
}
void reverse(Node* head, int k){
    `/[\f]
}
int main(){

}