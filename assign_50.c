
#include <stdio.h>

int main() {
        int i,k;
    
    int m[8]={1};

    //for max:
     if(m[0]>m[1]){
        k=m[0];
    }else{
        k=m[1];
    }
    for(i=2;i<8;i++){
        if(m[i]>k){
            k=m[i];
            
        }
    }
    printf("%d is max\n", k);
    
    //for min:
      if(m[0]>m[1]){
        k=m[0];
    }else{
        k=m[1];
    }
    for(i=2;i<8;i++){
        if(m[i]<k){
            k=m[i];
            
        }
    }
     printf("%d is min", k);
    
    

    return 0;
}