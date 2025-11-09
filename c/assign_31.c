#include<stdio.h>
void main()
{
    int n,i,m;
    printf("put n=");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        m=n*i;
        printf("%d*%d=%d\n",n,i,m);
    }
}