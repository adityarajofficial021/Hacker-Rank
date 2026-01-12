#include <stdio.h>

int main() {
    
    int n, a, d;
    scanf("%d %d %d", &n, &a, &d);
    
        for(int j=1;j<=n;++j){
        printf("%d ",a+(j-1)*d);
        }
    
    return 0;
}