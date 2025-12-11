#include <stdio.h>

    int main(){
        int income;
        float tax;
        scanf("%d", &income);
        
        if(income < 0)
        {
          printf("INVALID");
        }
        else if(income <= 250000)
        {  
          printf("0.00");
        }
        else if(income <= 500000)
        {
          tax = (income - 250000) * 5.00/100.00;
          printf("%.2f", tax);
        }
        else if(income <=1000000)
        {
          tax = (250000 *5.00/100.00) + ((income - 500000) * 20.00/100.00);
          printf("%.2f",tax);
        }
        else if(income > 1000000)
        {
            tax = ((250000 *5.00/100.00) + (500000 * 20.00/100.00)) + 
                ((income - 1000000) * 30.00/100.00 );
            printf("%.2f",tax);
        }
    return 0;
    }