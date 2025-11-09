#include<stdio.h>
void natural(int,int,int);
void main(){
    int a=1,c=1,s=0;
    natural(a,c,s);

}
void natural(int n,int n1, int n2){
    while(n1<=10){
        if(n%2==0){
         
            n2=n2+n;
            n1++;
        }
        n++;
    }
       printf("%d\n",n2);
    
}