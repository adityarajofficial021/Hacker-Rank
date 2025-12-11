#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    
    printf("Lengths: [%d, %d, %d]\n", a, b, c);
    
    
    if(((a+b) <= c || (a+c) <= b || (b+c) <=a) || ( (a <= 0) || (b<=0) || (c<=0) ))
    {
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape."); 
    }
    else if((a != b) && (a != c) && (b != c))
    {
        printf("Type: Scalene\n");
        printf("All sides are of different lengths.\n");
    }
    else if( (a==b) && (b == c) )
    {
        printf("Type: Equilateral\n");
        printf("All sides are of the same length.\n");
    }
    else
    {
        printf("Type: Isosceles\n");
        printf("Exactly two sides are equal.\n");
    }

     
    return 0;
}