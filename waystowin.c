#include <stdio.h>
int main(){
     int cVotes, stateOneVotes, stateTwoVotes;
    char state1[20], state2[20];
    int minimumVotes;
    int waysToWin = 0;

    printf("How many electoral votes has your candidate won?\n");
    scanf("%d", &cVotes);

    if (cVotes >= 269){
        printf("The number of electoral votes won must be less than 269.\n");
        return 1;
    }

    printf("What is the name of the first state in contention?\n");
    scanf("%s", state1);
    printf("How many electoral votes does it have?\n");
    scanf("%d", &stateOneVotes);

    printf("What is the name of the second state in contention?\n");
    scanf("%s", state2);
    printf("How many electoral votes does it have?\n");
    scanf("%d", &stateTwoVotes);
    if (stateOneVotes >= 56 || stateTwoVotes >= 56 ){
        printf("The number of electoral votes for both states must be less than 56\n");
        return 1;
    }

    if (cVotes + stateOneVotes >= minimumVotes){
        printf("Your candidate wins if he/she wins %s.\n", state1);
        waysToWin++;
    }
    if (cVotes + stateTwoVotes >= minimumVotes){
        printf("Your candidate wins if he/she wins %s.\n", state2);
        waysToWin++;
    }
    if (cVotes + stateOneVotes + stateTwoVotes >= minimumVotes){
        printf("Your candidate wins if he/she wins %s and %s.\n", state1, state2);
        waysToWin++;
    }

    printf("Your candidate can win in %d number of ways!\n", waysToWin);

    
}