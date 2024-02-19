#include<stdio.h>
#include<iostream>

using namespace std;
struct list{
    int data;
    list *next;
};
typedef struct list node;

void display(node *start){
  node *temp;
  temp=start;
  while(temp!=NULL){
    cout<<temp->data <<" ";
    temp=temp->next;
  }
}
int main(){
    node *start = NULL, *temp = NULL, *prev = NULL; // Initialize pointers to NULL
    int ans;
    cout<<"Do you want to add data? ";
    cin>>ans;
    while(ans==1){
        if(start==NULL){
            start=new node();
            cout<<"Enter Data: ";
            cin>>start->data;
            start->next=NULL;
            prev=start;
        }
        else{
            temp=new node();
            cout<<"Enter Data: ";
            cin>>temp->data;
            prev->next=temp;
            temp->next=NULL;
            prev=temp;
        }
        cout<<"Do you want to add data? ";
        cin>>ans;
    }
    display(start);
    return 0;
}
