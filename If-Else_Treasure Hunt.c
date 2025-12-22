#include <stdio.h>

int main() {
    int path, swamp, bridge, finalchoice, answer1, answer2;
        
    scanf("%d", &path);
        
    if (path == 1) {
        printf("Player chooses the Left path.\n");
            
        scanf("%d", &swamp);
            
        if (swamp == 1) {
            printf("Poor choice, Game Over!\n");
        } 
        else if (swamp == 2) {
            printf("Player found a bridge.\n");
                    
            scanf("%d", &bridge);
                
            if (bridge == 1) {
                printf("Player crosses the bridge safely.\n");
                        
                scanf("%d", &finalchoice);
                        
                if (finalchoice == 1) {
                    printf("All that glitters is not gold, Game Over!");
                }
                else if (finalchoice == 2) {
                    printf("All your efforts were for nothing, Game Over!");
                }
                else if (finalchoice == 3) {
                    printf("Congratulations!! You won the treasure.");
                }
            }
            else {
                printf("Poor luck, Game Over!\n");
            }
        }
    }
        
    else if (path == 2) {
        printf("Player chooses the Middle path.\n");
          
        scanf("%d", &answer1);

        if (answer1 == 582) {
            printf("Player solved the puzzle.\n");

            scanf("%d", &finalchoice);
           
            if (finalchoice == 1) {
                printf("All that glitters is not gold, Game Over!");
            }
            else if (finalchoice == 2) {
                printf("All your efforts were for nothing, Game Over!");
            }
            else if (finalchoice == 3) {
                printf("Congratulations!! You won the treasure.");
            }
        }
        else {
            printf("Foolish player, Game Over!\n");  
        }
    }
        
    else if (path == 3) {
        printf("Player chooses the Right path.\n");
           
        scanf("%d", &answer2);

        if (answer2 == 30) {
            scanf("%d", &finalchoice);
            printf("Player solved the puzzle.\n");

            if (finalchoice == 1) {
                printf("All that glitters is not gold, Game Over!");
            }
            else if (finalchoice == 2) {
                printf("All your efforts were for nothing, Game Over!");
            }
            else if (finalchoice == 3) {
                printf("Congratulations!! You won the treasure.");
            }
        }
        else {
            printf("Foolish player, Game Over!");
        }
    }

    return 0;
}
