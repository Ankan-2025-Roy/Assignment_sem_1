#include <stdio.h>
#include<math.h>

int main() {
     int A=0,b=10,n,a;
    printf("put n=");
    scanf("%d",&n);
    while(A<n){
        a=n%b;
        A=pow(a,2);
        if(A==n){
            printf("%d is Automorphic num",n);
            break;
          
        }else if(A>n){
            printf("%d is not a Automorphic num",n);
            
        }
        b=b*10;
    }
 

    return 0;
}