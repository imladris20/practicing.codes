#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
    
// random number generating part
time_t t;
srand((unsigned)time(&t));
int randomNumber = rand() % 101;

// declaring variable
int guessnumber = 0;

printf("Welcome to the Guessing Game. \nI have chosen a number between 0 and 100 which you are going to guess. \n\n");

// start guessing when still have tries left
for (int triesleft = 7 ; triesleft>0 ; triesleft--){
    
    // show how many tries or try
    printf("\nYou have %d tr%s left.\n", triesleft, triesleft == 1? "y" : "ies");

    // ask input of guessings
    printf("Enter your guess number: ");
    scanf("%d", &guessnumber);
    if (guessnumber>100 || guessnumber < 0){
        printf("Can't you read English? \nInsert number between 0-100!\n\n");
    }
    else if (guessnumber > randomNumber) {
    printf("\nSorry, you're wrong. \nMy number is lower.\n\n");
    }
    else if (guessnumber < randomNumber){
        printf("\nSorry, you're wrong. \nMy number is higher.\n\n");
    }
    else {
        printf("\nYes! You're right!\nYou win the game!\nCongratulation!\n\n");
        return 0;
        system ("pause");
    }
}

printf("You lose the game, lol.\nThe number is %d.\n\n", randomNumber);

// 用來暫停
system("pause");

}
