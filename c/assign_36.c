#include<stdio.h>
void main(){
    int age,a,b;
    printf("put age=");
    scanf("%d",&age);
    a=age/10;
    b=(age%10)/8;
    switch(a){
        case 0:printf("not eligible");
        break;
        case 1:switch(b){
             case 0:printf("not eligible");
                    break;
             default:printf("eligible");        
        }
    }
}