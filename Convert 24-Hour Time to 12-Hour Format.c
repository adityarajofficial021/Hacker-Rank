#include <stdio.h>

    int main(){
        int h, m;
        
        scanf("%d %d", &h, &m);
        if(h >=24 || m > 59 || h<0 || m<0)
        {
            printf("Invalid Input!");
        }
        else if(h == 0)
        {
            h = 12;
            printf("%d:%02d AM", h, m);
        }
        else if(h < 12)
        {
            printf("%d:%02d AM", h, m);
        }
        else if(h == 12)
        {
            printf("%d:%02d PM",h ,m);
        }
        else if(h > 12)
        {
            h = h - 12;
            printf("%d:%02d PM", h, m);   
        }
        return 0;
    }