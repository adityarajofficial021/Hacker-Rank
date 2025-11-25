#include <stdio.h>
float halfnumber(int num){
    return num / 2.0;
}
int main() {
    int num;
    scanf("%d",&num);
    float res = halfnumber(num);
    printf("Half of %d is %.2f",num,res);
    
    return 0;
}
