#include<stdio.h>
#include<conio.h>
#include<iostream>

using namespace std;
struct list{
    int data;
    list *next;
};
typedef struct list node;
int main(){
    node *a,*b,*c;
    a = new node();
    a->data=10;
    b = new node();
    b->data=20;
    c = new node();
    c->data=30;
    a->next=b;
    b = new node();
    b->data=100;
    cout<<a->data <<" "<<a->next->data <<" " <<b->data <<" " <<c->data;

    cout<< 
    getch();
}