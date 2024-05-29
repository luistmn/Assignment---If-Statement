#include <stdio.h>

int main(){
    int candidate, opponent;
    int total = 538;
    int minimum = 270;
    int grabs;
    double percent;

    printf("How many electoral votes does your candidate already have?\n");
    scanf("%d", &candidate);
    printf("How many electoral votes does your opponent already have?\n");
    scanf("%d", &opponent);


    grabs = total - (candidate + opponent);

    percent = (double)(minimum - candidate)/grabs * 100;

    printf("%.2f percent of the remaining vote is needed to win!", percent);

    /*END OF PROBLEM B*/
}