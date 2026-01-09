#include <stdio.h>
#include <math.h>

int main(){
    
    int num;
    scanf("%d", &num);
    
    if(num <= 1){
        printf("None");
        return 0;
    }
    
    int flag =1;
    
    for(int i=2; i<= sqrt(num); ++i){
         if(num%i ==0){
             flag =0;
             break;
         }
    }
    if(flag){
        printf("Prime");
    }
    else{
        printf("Composite");
    }
    return 0;
}