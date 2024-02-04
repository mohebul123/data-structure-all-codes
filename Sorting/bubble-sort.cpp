#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{   
    int ar[5]={12,2,3,10,4};
    int i,j;
    for(int i=0;i<5;i++){
        for(int j=0;j<=5-2;j++){
            if(ar[j]>ar[j+1]){
                swap(ar[j],ar[j+1]);
            }
        }
    }
    for(j=0;j<5;j++)
    {
        printf("%d ",ar[j]);
    }
    return 0;
}