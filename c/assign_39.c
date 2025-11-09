#include <stdio.h>
#include<math.h>

int main() {
   int a,b,c;
   scanf("%d",&a);
   scanf("%d",&b);
   scanf("%d",&c);
   int n=(a>b && a>c?a:b>c?b:c);
   printf("%d is greatest num",n);

    return 0;
}