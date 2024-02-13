#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *next;
    node(int x){
        data=x;
        next=NULL;
    }
};
void printlist(node *head){
    node *curr=head;
    while(curr->next==NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }

}
node *insert_at_end(node *head,int x){
    node *temp =new node(x);
    if(head==NULL){
        return temp;
    }
    node *curr = head;
    while(curr->next!=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;
}
int main(){
    node *head=NULL;
    head=insert_at_end(head,10);
    head=insert_at_end(head,20);
    head=insert_at_end(head,30);
    printlist(head);
    return 0;

}