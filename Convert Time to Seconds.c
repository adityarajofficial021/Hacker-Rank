#include <stdio.h>

int to_seconds(int hours,int minutes, int seconds)
{
    int total = (hours*3600) + (minutes*60) + seconds;
    return total;
}
int main() {
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int result = to_seconds(a, b, c);
    printf("Total seconds: %d", result);

      
    return 0;
}