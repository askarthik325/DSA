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
node *insert_at_begin(node *head,int x){
    node *temp=new node(x);
    temp->next=head;
    return temp;
}
void printlist(node *head){
    node *curr=head;
    while(curr!=NULL){
        cout<<(curr->data)<<" s ";
        curr=curr->next;
    }
}
int main(){
    node *head= NULL;
    head=insert_at_begin(head,10);
    head=insert_at_begin(head,20);
    head=insert_at_begin(head,30);

    printlist(head);
    return 0;
}