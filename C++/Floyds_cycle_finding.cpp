// Floyds cycle finding algorithm : This algorithm is used to find a loop in the linkde list. It uses two pointers one moving twice as fast as the other one.
// i.e, the first pointer will move 2 nodes as compared to the other slower pointer in single iter. If there is a cycle in the given linked list then both the pointers will meet at some point .
// The slower one is called the slower pointer and faster one is called the faster pointer.

// Code : -
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int val ;
        node* next;
};
void add_node(node* head, int v){
    node* temp = head;
    node* n = new node();
    n->val = v;
    n->next = NULL;
    if(head == NULL) head=n;
    while(head->next){
        head =head->next;
    }
    head->next = n;
    head= temp;
}

bool detect(node*head){
    node *slow =head, *fast=head;
    while(slow && fast && fast->next){
        slow= slow->next;
        fast=fast->next->next;
        if(slow == fast) return true;
    }
    return false;
}
int main(){
    node* head = new node();
    head->next = NULL;
    add_node(head,20);
    add_node(head,15);
    add_node(head,10);
    add_node(head,5);
    add_node(head,0);
    head->next->next->next->next = head;
    if(detect(head)) cout<<"Yes , a cycle is detected"<<endl;
    else cout<<"No, there is no cycle present"<<endl;
    return 0 ;
}