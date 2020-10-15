#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int accbal=100;
void randomnum(int upper,int lower,int sum)
{
    int num[2];
    for(int i=0;i<2;i++){
    num[i]=(rand()%(upper - lower)+1)-lower;

    }
    printf("  Dice 1: %d\n",num[0]);
    printf("  Dice 2: %d\n\n",num[1]);
    int totdv= num[0]+num[1];
    printf("  Sum of dices:%d\n\n",totdv);
    if (sum==totdv){
        printf("  WIN!!\n\n");
        accbal=accbal+sum;
    }
    else{
        printf("  YOU LOSE :(\n\n");
        accbal=accbal-1;
    }
    printf("> Your account balance is %d.00.\n\n",accbal);

}

int main()
{
    int sum;
    char ans;
    printf("------------------------------------------------------------------------\n------------------------------------------------------------------------\n-----------------------welcome to dice game-----------------------------\n------------------------------------------------------------------------\n");
    printf("> Your account balance is 100.00.\n\n");
    do{
    printf("> Guess the sum of two dices(2-12): ");
    scanf("%d",&sum);
    if (sum>=2 && sum<=12){
    printf("\n  Rolling . . . .\n\n");
    int upper=6, lower=1;
    srand(time(0));
    randomnum(upper,lower,sum);
    }
    else
        printf("> Invalid input.Please input  a number between 2 and 12.\n\n");
    printf("Do you want to play the game again?[y/n]: ");
    scanf("%s",&ans);
    if (ans=='y'){
        printf("------------------------------------------------------------------------\n");
    }
    }while (ans=='y');
    system("pause");
    return 0;
}
