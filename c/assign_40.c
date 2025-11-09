#include <stdio.h>
#include<math.h>

int main() {
     int n,b,c=0;
     scanf("%d",&n);
     while(n>0){
        b=n/10;
        c++;
        n=b;
     }
     printf("%d",c);
 

    return 0;
}