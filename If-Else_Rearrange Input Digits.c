#include <stdio.h>

int main() {
    
    int N;
    scanf("%d", &N);
    
    int a = N/1000;
    int b = N/100;
              b = b % 10;
    int c = (N/10) % 10;
    int d = N % 10;
    
    int first, second, third, fourth;
    
    if(a >= b && a >= c && a >= d){
        first = a;
        
        if(b >= c && b >= d){
            second = b;
            
            if(c >= d){
            third = c;
            fourth = d;
          }
        else if(d >= c){
            third = d;
            fourth = c;
          }
        }
        else if(c >= b && c >=d){
            second = c;
            
          if(b >= d){
            third = b;
            fourth = d;
          }
        else if(d >= b){
            third = d;
            fourth = b;
             }
           }
        else if(d >= b && d >= c){
            second = d;
            
            if(b >= c){
                third = b;
                fourth = c;
            }
            else if(c >= b){
                third = c;
                fourth = b;
            }
          }
        }
      
    
   else if(b >= a && b >= c && b >= d){
       first = b;
        
       if(a >= c && a >= d){
        second = a;
           
           if(c >= d){
            third = c;
            fourth = d;
          }
        else if(d >= c){
            third = d;
            fourth = c;
        }
           
       }
       
       else if(c >= a && c >= d){
           second = c;
           
        if(a >= d){
            third = a;
            fourth = d;
          }
        else if(d >= a){
            third = d;
            fourth = a;
        }
       }
     }
    else if(c >= a && c >= b && c >= d){
        first = c;
        
        if(a >= b && a >= d){
            second = a;
            
            if(b >= d){
                third = b;
                fourth = d;
            }
            else if(d >= b){
                third = d;
                fourth = b;
            }
        }
        else if(b >= a && b >= d){
            second = b;
            
            if(a >= d){
                third = a;
                fourth = d;
            }
            else if(d >= a){
                third = d;
                fourth = a;
            }
        }
    }
    
    else if(d >= a && d >= b && d >= c){
        first = d;
        
        if(a >= b && a >= c){
            second = a;
            
            if(b >= c){
                third = b;
                fourth = c;
            }
            else if(c >= b){
                third = c;
                fourth = b;
            }
        }
       
        else if(b >= a && b >= c){
            second = b;
            
            if(a >= c){
                third = a;
                fourth = c;
            }
            else if(c >= a){
                third = c;
                fourth = a;
            }
        }
        else if (c >= a && c >= b){
            second = c;
            
            if(a >= b){
                third = a;
                fourth = b;
            }
            else if(b >= a){
                third = b;
                fourth = a;
            }
        }
    }
   
    
    printf("%d%d%d%d", first, second, third, fourth);
    return 0;

}
