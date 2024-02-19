#include<stdio.h>
#include<conio.h>
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
    node *start,*temp;
    start = new node();
    start->data=10;
    temp = new node();
    temp->data=20;
    start->next=temp;
    temp= new node();
    temp->data=30;
    start->next->next=temp;
    temp= new node();
    temp->data=40;
    start->next->next->next=temp;
    temp=NULL;
    display(start);
    getch();
}