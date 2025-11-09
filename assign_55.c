#include<stdio.h>
void main(){
    int i,pre;
    int A[5]={1,2,3,4,5};
    for(i=0;i<5/2;i++){
        pre=A[4-i];
        A[4-i]=A[i];
        A[i]=pre;
      
    }
    printf("\n");
    for(i=0;i<5;i++){
        printf("%d ",A[i]);
    }
}