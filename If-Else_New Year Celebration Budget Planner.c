#include <stdio.h>

int main() {
    
    int budget, numGuests, foodCostPerGuest, decorationCost, musicCost, extraExpenses;
    scanf("%d %d %d %d %d %d", &budget, &numGuests, &foodCostPerGuest, &decorationCost, &musicCost, &extraExpenses);
    
    int expense = (foodCostPerGuest * numGuests) + decorationCost + extraExpenses;
    if( numGuests > 25){
        expense = expense + musicCost;
    }
    
    int totalfoodcost = foodCostPerGuest * numGuests;
    
    if((expense <= budget) && 
       (numGuests > 5 && numGuests <= 50) 
       &&( (decorationCost < 0.3 * budget) ||
       (totalfoodcost < 0.5 * budget) ) &&
      (numGuests <= 25 || musicCost > 0))

    {
        printf("Celebration Approved");
    }
    else{
        printf("Celebration Denied");
    }
    
    return 0;
}