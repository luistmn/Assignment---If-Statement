/*Luis Timana
Assignment + If Statement (Election)
5/29/24
*/
#include <stdio.h>
#define USPOPULATION  299000000

int main (){
    int statePopulation;

    printf("What is the population of your state?\n");
    scanf("%d", &statePopulation);

    //Prevents integer overflow
    long long statePopulationLong = (long long) statePopulation * 435;

    int houseMembers = statePopulationLong / USPOPULATION;
    int electoralVotes = houseMembers + 2;

    printf("Your state has %d electoral votes.", electoralVotes);

    
    
    

}