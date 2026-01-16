#include <stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    
    for(; ;){
         printf("%d", num);
          if(num==1)
            break;
        printf(" -> ");
        if(num%2)
            num = 3*num + 1;
        else
           num = num/2;
      
    }
    return 0;
}