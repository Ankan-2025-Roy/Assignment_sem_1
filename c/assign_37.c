#include<stdio.h>
#include<math.h>
void main()
{
    float p,s,h, a,b,c;
    printf("put a=");
    scanf("%d",&a);
    printf("put b=");
    scanf("%d",&b);
    printf("put c=");
    scanf("%d",&c);
    p=a+b+c;
    s=(0.5)*p;
    h=sqrt(s*(s-a)*(s-b)*(s-c));
    if(p==h){
        printf("equiqble triangle");
    }else{
         printf("not a equiqble triangle");
    }


}