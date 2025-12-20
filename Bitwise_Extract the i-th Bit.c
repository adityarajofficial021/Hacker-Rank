#include <stdio.h>

int main() {

    int n, i;
    scanf("%d", &n);
    scanf("%d", &i);
   
    if((1<<i) &n)
        printf("1");
    else
        printf("0");
    return 0;
}